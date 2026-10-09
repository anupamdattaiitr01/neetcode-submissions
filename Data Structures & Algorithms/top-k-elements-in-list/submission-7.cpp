class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map <int, int> mpp;
        for (int i =0;i<nums.size();i++)
        {
            mpp[nums[i]]++;
        }

        vector <pair <int, int>> p;
        for (auto it: mpp)
        {
            p.push_back({it.second, it.first});
        }

        sort (p.begin(), p.end(), greater<>());
        vector <int> ans;
        for (int i =0;i<k;i++)
        {
            ans.push_back(p[i].second);
        }

        return ans;
    }
};
