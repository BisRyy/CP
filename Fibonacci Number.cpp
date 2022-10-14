class Solution {
public:
    int fib(int n) {
        int dp[31]{-1};
        if(n==0)
            return 0;
        else if(n==1)
            return 1;
        else if(dp[n]==0)
            dp[n] = fib(n-1) + fib(n-2);
        return dp[n];
    }
};
