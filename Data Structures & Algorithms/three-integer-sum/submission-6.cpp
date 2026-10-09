class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int n = nums.size();
        sort (nums.begin(), nums.end());

        vector <vector <int>> ans;
        set <vector <int>> st;
        for (int i =0;i<n-2;i++)
        {
            if (i >0 && nums[i] == nums[i-1]) continue;
            int j = i+1, k = n-1;
            while (j < k)
            {
                if (nums[i] + nums[j] + nums[k] ==0)
                {
                    // ans.push_back({nums[i], nums[j], nums[k]});
                    st.insert ({nums[i], nums[j], nums[k]});
                    j++;
                    k--;
                }
                else if (nums[i] + nums[j] + nums[k] > 0) k--;
                else j++;
            }
        }
        if (st.size()>0)
        {
            for (auto it: st) ans.push_back (it);
        }
        return ans;
    }
};
