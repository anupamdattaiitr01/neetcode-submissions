class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        int n = nums.size();
        map <int, int> mpp;
        for (int i =0;i<n;i++) mpp[nums[i]]++;
        vector <pair <int, int>> p;
        for (auto it: mpp)
        {
            p.push_back({it.second, it.first});
        }

        sort(p.begin(), p.end(), greater <>());
        vector <int> res;
        for (int i =0;i<k;i++) res.push_back(p[i].second);
        return res;
    }
};
