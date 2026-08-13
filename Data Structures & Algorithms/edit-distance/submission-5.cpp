class Solution {
private: 
    vector <vector <int>> dp;
    int fun (int n, int m, string &s, string &t)
    {
        // if (n ==0 || m ==0) return 0;
        if (m ==0) return n;
        else if (n ==0) return m;

        if (dp[n][m] != -1) return dp[n][m];
        if (s[n-1] == t[m-1]) return dp[n][m] = fun (n-1, m-1, s,t);
        else 
        {
            int a = 1 + fun (n-1, m, s,t);
            int b = 1 + fun (n-1, m-1, s,t);
            int c = 1 + fun (n,m-1,s,t);
            b = min (b,c);
            return dp[n][m] = min (a,b);
        }
    }
public:
    int minDistance(string word1, string word2) {
        int n = word1.length();
        int m = word2.length();
        if (n==0 || m ==0) return max (n,m);
        dp.assign (n+1, vector <int> (m+1, -1));
        return fun (n,m,word1, word2);
    }
};
