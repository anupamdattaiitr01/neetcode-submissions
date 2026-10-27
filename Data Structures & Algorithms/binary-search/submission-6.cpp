class Solution {
public:
    int search(vector<int>& nums, int target) {
        if (nums[0] > target || nums[nums.size()-1] < target) return -1;
        int num = *lower_bound(nums.begin(), nums.end(), target);
        if (num == target)
        {
            int ind= lower_bound(nums.begin(), nums.end(), target)- nums.begin();
            return ind;
        }
        else return -1;
    }
};
