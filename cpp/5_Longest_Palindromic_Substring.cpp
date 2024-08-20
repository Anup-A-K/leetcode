class Solution {
public:
    bool isPalindrome(string s){
        int n = s.size();
        for(int i=0; i<n/2; i++){
            if(s[i] != s[n-i-1]){
                return false;
            }
        }
        return true;
    }

    string longestPalindrome(string s) {
        int n = s.size();
        if(n == 0) return "";
        if(n == 1) return s;

        int max_len = 1;
        string max_str = s.substr(0, 1);

        for(int i=0; i<n; i++){
            for(int j=1; j<=n-i; j++){
                if(isPalindrome(s.substr(i, j)) && j > max_len){
                    max_len = j;
                    max_str = s.substr(i, j);
                }
            }
        }

        return max_str;
    }
};