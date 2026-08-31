class Solution {
public:
    int maxArea(vector<int>& heights) {
        int lo = 0, hi = heights.size()-1;
        int ans =0;
        while (lo < hi)
        {
            int tmp = min (heights[lo], heights[hi])* (hi-lo);
            ans = max (ans, tmp);

            if (heights[lo] <= heights[hi])lo++;
            else hi--;
        }
        return ans;
    }
};
