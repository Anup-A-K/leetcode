class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int n = strs.size();

        sort(strs.begin(), strs.end(), [](string a, string b) {
            return a.size() < b.size();
        });

        string prefix = "";
        for (int i = 0; i < strs[0].size(); i++) {
            char c = strs[0][i];
            for (int j = 1; j < n; j++) {
                if (strs[j][i] != c) {
                    return prefix;
                }
            }
            prefix += c;
        }
        return prefix;
    }
};