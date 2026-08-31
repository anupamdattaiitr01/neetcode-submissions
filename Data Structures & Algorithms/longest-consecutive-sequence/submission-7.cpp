class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int n = nums.size();
        unordered_map <int, int> mpp;
        for (int i =0;i<n;i++) mpp[nums[i]]=1;
        // int ln =0;
        int ans = 0;
        for (auto it : nums)
        {
            if (mpp.find (it -1) == mpp.end())
            {
                int ln =1;
                while (mpp.find(it + ln) != mpp.end()) ln++;
                ans = max (ans, ln);
            }
        }

        return ans;
    }
};
