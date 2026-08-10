class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n = s.length();
        map <char, int> mpp;
        int ans = 0;
        int lo =0;
        for (int i =0;i<n;i++)
        {
            char k = s[i];
            if (mpp.find (k) != mpp.end() && lo <= mpp[k]) lo = mpp[k]+1;
            mpp[k] = i;
            int ln = i -lo+1;
            ans = max (ans, ln);
            // cout << lo << " ";
        }

        return ans;
    }
};
