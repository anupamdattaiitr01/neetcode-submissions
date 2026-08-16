class Solution {
    vector <vector <int>> dp;
    bool fun (int n, int sum, vector <int> &nums)
    {
        if (sum ==0) return true;
        if (n==0) return false;

        if (dp[n][sum] != -1) return dp[n][sum];
        if (nums[n-1] <= sum)
        {
            bool a = fun (n-1, sum - nums[n-1], nums);
            bool b = fun (n-1, sum, nums);
            return dp[n][sum]= a|b;
        }
        else return dp[n][sum]= fun (n-1, sum, nums);
    }
public:
    bool canPartition(vector<int>& nums) {
        int sum =0;
        for (auto it : nums) sum += it;
        int n = nums.size();
        if (sum %2) return false;
        sum /= 2;

        dp.assign (n+1, vector <int>(sum+1, -1));
        return fun (n, sum, nums);
    }
};
