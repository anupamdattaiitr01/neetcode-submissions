class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map <int, int> mpp;
        for (int i =0;i<nums.size();i++)
        {
            int num = nums[i];
            int num1 = target- num;
            if (mpp.find (num1) != mpp.end())
            {
                return {mpp[num1], i};
            }

            mpp[num] = i;
        }

        return {-1, -1};
    }
};
