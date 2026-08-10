class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int lo = 0;
        int hi = numbers.size()-1;
        vector <int> res (2, -1);
        while (lo < hi)
        {
            int sum = numbers[lo] + numbers[hi];
            if (sum == target)
            {
                res[0] = lo+1;
                res[1] = hi+1;
                break;
            }
            else if (sum < target) lo++;
            else hi--;
        }

        return res;
    }
};
