class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector <int> pre (n);
        vector <int> suf (n);
        long long p =1 ;
        for (int i=0;i<n;i++)
        {
            p = p * (1LL*nums[i]);
            pre[i] = p;
        }

        p=1 ;
        for (int i = n-1;i>=0;i--)
        {
            p = p*(1LL*nums[i]);
            suf[i]= p;
        }

        vector <int> ans(n);
        for (int i =0;i<n;i++)
        {
            if (i ==0) ans[i] = suf[i+1];
            else if (i == n-1) ans[i] = pre[i-1];
            else 
            {
                ans[i] = pre[i-1]*suf[i+1];
            }
        }

        return ans;
    }
};
