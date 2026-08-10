class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        vector <int> min1 (n);
        vector <int> max1 (n);
        int mn = prices[0];
        for (int i =0;i<n;i++)
        {
            mn = min (mn, prices[i]);
            min1[i] = mn;
        }
        int mx = prices[n-1];
        for (int i = n-1;i>=0;i--)
        {
            mx = max (mx, prices[i]);
            max1[i] = mx;
        }
        int ans =0;
        for (int i =0;i<n;i++)
        {
            int diff = max1[i] - min1[i];
            ans = max (ans, diff);
        }

        return ans;
    }
};
