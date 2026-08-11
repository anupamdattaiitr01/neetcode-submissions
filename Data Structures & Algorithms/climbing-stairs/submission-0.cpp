class Solution {
    vector <int> dp;
public:
    int fun (int n)
    {
        if (n ==0) return 1;
        if (n <0) return 0;
        if (dp[n] != -1) return dp[n];
        return dp[n] = fun (n-2) + fun (n-1);
    }
    int climbStairs(int n) {
        dp.assign (n+1, -1);
        return fun (n);
    }
};
