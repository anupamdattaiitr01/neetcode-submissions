class Solution {
    vector <int> dp;
public:
    int fun (int n, vector <int> &nums)
    {
        if (n <= 0) return 0;

        if (dp[n] != -1) return dp[n];
        int a = nums[n-1] + fun (n-2, nums);
        int b = fun (n-1, nums);
        return dp[n] = max (a,b);
    }

    int rob(vector<int>& nums) {
        int n = nums.size();
        dp.assign (n+1, -1);
        return fun (n, nums);
    }
};
