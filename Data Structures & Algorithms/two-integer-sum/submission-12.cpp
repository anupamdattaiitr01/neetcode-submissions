class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();
        unordered_map <int, int> mpp;
        for (int i =0;i<n;i++)
        {
            int tmp = target - nums[i];
            if (mpp.contains(tmp))
            {
                return {mpp[tmp], i};
            }
            mpp[nums[i]]=i;
        }
        return {};
    }
};
