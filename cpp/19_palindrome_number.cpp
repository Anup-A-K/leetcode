class Solution {
public:
    bool isPalindrome(int x) {
        ios::sync_with_stdio(false);
        cin.tie(NULL);
        cout.tie(NULL);

        if(x<0) return false;
        string s = to_string(x);
        if(s.length() == 1) return true;
        long long int a = x;
        long long int b = 0;
        while(a > 0)
        {
            b = a%10 + b*10;
            a = a/10;
        }

        return x == b;
    }
};