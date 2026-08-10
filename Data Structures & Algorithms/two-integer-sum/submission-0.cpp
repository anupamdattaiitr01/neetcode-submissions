class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();
        vector <pair <int, int>> v(n);
        for (int i=0;i<n;i++) v[i] = {nums[i], i};
        sort(v.begin(), v.end());
        int lo =0; int hi = n-1;
        vector <int> res;
        while (lo<hi)
        {
            int sum = v[lo].first + v[hi].first;
            if (sum == target)
            {
                res.push_back(v[lo].second);
                res.push_back(v[hi].second);
                break;
            }
            else if (sum <target) lo++;
            else hi--;
        }

        sort(res.begin(), res.end());
        return res;
    }
};
