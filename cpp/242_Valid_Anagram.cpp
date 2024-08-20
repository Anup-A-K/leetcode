class Solution {
public:
    bool isAnagram(string s, string t) {
        ios::sync_with_stdio(false);
        cin.tie(NULL);
        cout.tie(NULL);
        
        if(s.size()!=t.size()) return false;

        sort(s.begin(), s.end());
        sort(t.begin(), t.end());

        return s==t;
    }
};