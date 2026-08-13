class Solution {
private: 
    vector <vector <vector <int>>> dp;
public:
    bool fun (int n, int m, int k, string &s, string &t, string &a)
    {
        if (n==0 && m==0 && k ==0) return true;
        else if (n==0)
        {
            string tmp1 = t.substr(0,m);
            string tmp2 = a.substr (0,k);
            return tmp1 == tmp2;
        }
        else if (m==0)
        {
            string tmp1 = s.substr(0,n);
            string tmp2 = a.substr (0,k);
            return tmp1 == tmp2;
        }

        if (dp[n][m][k] != -1) return dp[n][m][k];

        if (a[k-1] == s[n-1] && a[k-1] != t[m-1] )
        {
            return dp[n][m][k] = fun (n-1,m,k-1, s,t,a);
        }
        else if (a[k-1] == t[m-1] && a[k-1] != s[n-1])
        {
            return dp[n][m][k] = fun (n,m-1,k-1,s,t,a);
        }
        else if (a[k-1] == s[n-1] && a[k-1] == t[m-1] )
        {
            return dp[n][m][k] = fun (n-1,m,k-1, s,t,a) | fun (n,m-1,k-1,s,t,a);
        }
        else return false;
    }
    bool isInterleave(string s1, string s2, string s3) {
        int n = s1.length();
        int m = s2.length();
        int p = s3.length();
        if (n+m != p) return false;
        dp.assign (n+1, vector <vector <int>> (m+1, vector <int> (p+1,-1)));
        return fun (n,m,p,s1,s2,s3);
    }
};
