class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        ios::sync_with_stdio(false);
        cin.tie(NULL);
        cout.tie(NULL);

        vector<vector<string>> res;
        unordered_map<string, vector<string>> anagrams;
        
        for(string s : strs){
            string sorted_s = s;
            sort(sorted_s.begin(), sorted_s.end());
            anagrams[sorted_s].push_back(s);
        }
        
        for(auto it : anagrams){
            res.push_back(it.second);
        }
        
        return res;   
    }
};