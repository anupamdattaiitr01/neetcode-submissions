class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        int n = strs.size();
        map <string, vector <string>> mpp;
        for (int i =0;i<n;i++)
        {
            string s = strs[i];
            string t = s;
            sort(t.begin(), t.end());
            mpp[t].push_back(s);
        }

        vector <vector <string>> ans;
        for (auto it : mpp)
        {
            vector <string> tmp = it.second;
            ans.push_back(tmp);
        }

        return ans;
    }
};
