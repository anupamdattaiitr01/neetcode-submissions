class Solution {
    vector <vector <int>> dp;
public:
    int fun (int n, int sum, vector <int> &nums)
    {
        if (sum ==0) return 0;
        else if (n ==0) return 1e9;

        if (dp[n][sum] != -1) return dp[n][sum];
        if (nums[n-1] <= sum)
        {
            int a = 1 + fun (n, sum- nums[n-1], nums);
            int b = fun (n-1, sum, nums);
            return dp[n][sum] = min (a,b);
        }
        else return dp[n][sum] = fun (n-1, sum, nums);
    }
    int coinChange(vector<int>& coins, int amount) {
        int n = coins.size();
        // vector <vector <int>> dp (n+1, vector <int> (amount+1, 1e9));
        dp.assign (n+1, vector <int> (amount+1, -1));
        int ans = fun (n, amount, coins);
        if (ans>= 1e9) return -1;
        return ans;
    }
};
