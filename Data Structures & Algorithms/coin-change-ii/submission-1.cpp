class Solution {
private:
    vector <vector <int>> dp;
public:
    int fun (int n, int amt, vector <int> &coins)
    {
        if (amt ==0) return 1;
        if (n ==0) return 0;
        if (dp[n][amt] != -1) return dp[n][amt];
        if (coins[n-1] <= amt)
        {
            int a = fun (n, amt- coins[n-1], coins);
            int b = fun (n-1, amt, coins);
            return dp[n][amt] = a+b;
        }
        else return dp[n][amt] = fun (n-1, amt, coins);
    }
    int change(int amount, vector<int>& coins) {
        int n = coins.size();
        dp.assign (n+1, vector <int> (amount+1, -1));
        return fun (n, amount, coins);
    }
};
