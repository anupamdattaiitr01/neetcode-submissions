class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int mn = prices[0];
        int ans =0;
        for (int i =0;i<prices.size();i++)
        {
            mn = min (prices[i], mn);
            int diff = prices[i] - mn;
            ans = max (ans, diff);
        }
        return ans;
    }
};
