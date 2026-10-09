class Solution {
public:
    int search(vector<int>& nums, int target) {
        if (target < nums[0] || target > nums[nums.size()-1]) return -1;
        else 
        {
            int num1 = *lower_bound (nums.begin(), nums.end(), target);
            if (num1 == target)
            {
                int ind = lower_bound (nums.begin(), nums.end(), target) - nums.begin();
                return ind;
            }
            else return -1;
        }
    }
};
