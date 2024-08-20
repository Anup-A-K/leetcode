class Solution {
public:
    int reverse(int x) {
        long long int c = x;
        long long int ans = 0;
        while(c != 0){
            ans = ans*10 + c%10;
            c = c/10;
        }
        if(ans > INT_MAX || ans < INT_MIN){
            return 0;
        }
        return ans;
    }
};