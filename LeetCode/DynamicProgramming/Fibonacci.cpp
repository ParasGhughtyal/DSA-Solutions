class Solution {
public:

    int fibo(int n, vector<int>& dp)
    {         
        if(n<=1)
        return n;

        if(dp[n] != -1)
        return dp[n];

        return dp[n] = fibo(n-1, dp) + fibo(n-2, dp);
    }

    int fib(int n) {
        
        vector<int> ans(n+1,-1);
        return fibo(n, ans);

    }
};
