class Solution {
public:
    int divide(int dividend, int divisor) {
        ios::sync_with_stdio(false);
        cin.tie(NULL);
        cout.tie(NULL);
        long long res = (long long)dividend / (long long)divisor;
        if (res > INT_MAX) {
            return INT_MAX;
        } else if (res < INT_MIN) {
            return INT_MIN;
        } else {
            return (int)res;
        }
    }
};