class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();
        unordered_map <int, int> mpp;
        for (int i =0;i<n;i++)
        {
            if (i ==0) mpp[nums[i]]=i;
            else 
            {
                if (mpp.find (target - nums [i]) != mpp.end())
                {
                    vector <int> res = {mpp[target- nums[i]], i};
                    return res;
                }
                mpp[nums[i]] =i;
            }
        }

        vector <int> res = {-1,-1};
        return res;
    }
};
