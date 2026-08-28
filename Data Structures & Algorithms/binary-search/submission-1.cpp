class Solution {
public:
    int search(vector<int>& nums, int target) {
        if (target < nums[0] || target > nums [nums.size()-1]) return -1;
        int num1= *lower_bound (nums.begin(), nums.end(), target);
        if (num1 != target) return -1;
        return lower_bound (nums.begin(), nums.end(), target) - nums.begin();
    }
};
