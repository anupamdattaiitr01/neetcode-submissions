class Solution {
public:
    bool canJump(vector<int>& nums) {
        int n = nums.size();
        int mx_ind =0;
        for (int i =0;i<= mx_ind && i < n;i++)
        {
            int n_ind = i+nums[i];
            mx_ind = max (mx_ind, n_ind);
        }

        if (mx_ind >= n-1) return true;
        return false;
    }
};
