class Solution {
    vector <int> dp;
    int fun (int n,  vector <int> nums)
    {
        if (n<=0) return 0;

        if (dp[n] != -1) return dp[n];
        int a = nums[n-1] + fun (n-2, nums);
        int b = fun (n-1, nums);
        return dp[n] = max (a,b);

    }
public:
    int rob(vector<int>& nums) {
        int n = nums.size();
        if (n==1) return nums[0];
        dp.assign (n, -1);
        int a = fun (n-1, nums);
        dp.assign (n, -1);
        vector <int> nums1;
        for (int i =1;i<n;i++) nums1.push_back(nums[i]);
        int b = fun (n-1, nums1);
        return max (a,b);
    }
};
