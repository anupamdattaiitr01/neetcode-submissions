class Solution {
    vector <vector <int>> dp;
    int fun (int prev, int ind, vector <int> &nums)
    {
        int n = nums.size();
        if (ind >n) return 0;

        if (dp[prev][ind] != -1) return dp[prev][ind];
        if (prev == 0)
        {
            int a = fun (prev, ind+1, nums);
            int b = 1 + fun (ind, ind+1, nums);
            return dp[prev][ind] = max (a,b);
        }
        else if (nums[ind-1] > nums[prev-1])
        {
            int a = fun (prev, ind+1, nums);
            int b = 1 + fun (ind, ind+1, nums);
            return dp[prev][ind] = max (a,b);
        }
        else 
        {
            return dp[prev][ind] = fun (prev, ind+1, nums);
        }
    }
public:
    int lengthOfLIS(vector<int>& nums) {
        int n = nums.size();
        dp.assign (n+1, vector <int> (n+1, -1));
        return fun (0, 1, nums);
    }
};
