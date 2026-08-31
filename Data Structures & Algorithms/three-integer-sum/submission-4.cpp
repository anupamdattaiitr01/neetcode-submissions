class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int n = nums.size();
        sort(nums.begin(), nums.end());
        set <vector <int>> st;
        for (int i =0;i<n-2;i++)
        {
            int j = i+1, k = n-1;
            while( j < k)
            {
                int sum = nums[i] + nums[j] + nums[k];
                if (sum == 0)
                {
                    vector <int> tmp = {nums[i], nums[j], nums[k]};
                    sort(tmp.begin(), tmp.end());
                    st.insert (tmp);
                    j++;
                    k--;
                }
                else if (sum >0) k--;
                else j++;
            }
            while (i+1 < n-1 && nums[i+1] == nums[i])i++;
        }

        vector <vector <int>> ans;
        for (auto it : st)
        {
            ans.push_back(it);
        }

        return ans;
    }
};
