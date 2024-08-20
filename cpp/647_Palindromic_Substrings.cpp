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
    int countSubstrings(string s) {

        int n = s.size();
        if(n == 0) return 0;
        if(n == 1) return 1;

        int count = 0;

        for(int i=0; i<n; i++){
            for(int j=1; j<=n-i; j++){
                if(isPalindrome(s.substr(i, j))){
                    count++;
                }
            }
        }

        return count;
    }
};