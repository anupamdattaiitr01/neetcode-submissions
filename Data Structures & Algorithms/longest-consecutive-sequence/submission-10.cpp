class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int n = nums.size();
        if (n ==0) return 0;
        unordered_map <int, int> mpp;
        for (int i =0;i<n;i++) mpp[nums[i]]++;

        int ans =1;
        for (auto it: mpp)
        {
            if (mpp.find (it.first -1) == mpp.end())
            {
                int num = it.first+1;
                int tmp =1;
                while (mpp.find (num) != mpp.end())
                {
                    tmp++;
                    num++;
                }
                ans = max (ans, tmp);
            }
        }

        return ans;
    }
};
