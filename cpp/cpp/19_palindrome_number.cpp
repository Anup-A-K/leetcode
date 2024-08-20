class Solution {
public:
    bool isPalindrome(int x) {
        int a = x;
        int b = 0;
        while(a > 0)
        {
            b = a%10 + b*10;
            a = a/10;
        }

        return x == b;
    }
};