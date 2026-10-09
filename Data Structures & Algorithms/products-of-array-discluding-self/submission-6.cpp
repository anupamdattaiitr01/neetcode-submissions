class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector <int> suff (n);
        int p =1;
        for (int i =n-1;i>=0;i--)
        {
            p *= nums[i];
            suff[i] = p;
        }

        vector <int> ans (n);
        p =1 ;
        for (int i =0;i<n;i++)
        {
            if (i ==0) ans[i] = suff[i+1];
            else if (i == n-1) ans[i] = p;
            else 
            {
                ans[i] = p* suff[i+1];
            }
            p *= nums[i];
        }

        return ans;
    }
};
