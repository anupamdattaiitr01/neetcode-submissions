class Solution {
public:
    int rob(vector<int>& nums) {
        int n = nums.size();
        vector <int> dp (n);
        dp[0] = nums[0];
        for (int i =1;i<n;i++)
        {
            int num1 = nums[i];
            if (i-2>=0) num1 += dp[i-2];
            int num2 = dp[i-1];
            dp[i] = max (num1, num2);
        }

        return dp[n-1];
    }
};
