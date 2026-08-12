class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int n = nums.size();
        int ans = nums[0];
        int pre = 1;
        int suf = 1;
        for (int i =0;i<n;i++)
        {
            pre *= nums[i];
            suf *= nums [n-1-i];
            ans = max (ans, pre);
            ans = max (ans, suf);
            if (!pre) pre=1;
            if (!suf) suf =1;
        }

        return ans;
    }
};
