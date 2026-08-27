class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector <int> suf(n);
        long long p =1;
        for (int i =n -1;i>=0;i--)
        {
            p*= nums[i];
            suf[i] =p;
        } 
        p =1;
        vector <int> ans(n);
        for (int i =0;i<n;i++)
        {
            if (i!= n-1)
            {
                ans[i]= p* suf[i+1];
            }
            else 
            {
                ans[i] =p;
            }
            p*= nums[i];
        }

        return ans;
    }
};
