class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();
        int i =0, j = n-1;
        vector <pair <int, int>> p;
        for (int i =0;i<n;i++)
        {
            p.push_back({nums[i],i});
        }
        sort(p.begin(), p.end());
        vector <int> res (2, -1);
        // for (auto it: p) cout << it.first << " " << it.second << endl;
        while (i <j)
        {
            int sum = p[i].first + p[j].first;
            cout << sum << " ";
            if (sum == target)
            {
                res[0]= p[i].second;
                res[1]= p[j].second;
                break;
            }
            else if (sum > target) j--;
            else i++;
        }

        sort(res.begin(), res.end());
        return res;
    }
};
