class Solution {
public:
    string longestPalindrome(string s) {
        int n = s.length();
        vector <vector <bool>> dp (n, vector <bool> (n, false));
        int l =-1,r =-1;
        int ans =0;
        for (int i =0;i<n;i++)
        {
            for (int j = i;j>=0;j--)
            {
                if (i==j)
                {
                    dp[i][j] = true;
                    if (ans < 1)
                    {
                        ans =1 ;
                        l=j;
                        r=i;
                    }
                }
                else if (i-j ==1 && s[i] == s[j])
                {
                    dp[j][i] = true;
                    if (ans < 2)
                    {
                        ans =2 ;
                        l=j;
                        r=i;
                    }
                }
                else if (s[i] == s[j] && dp[j+1][i-1]) 
                {
                    dp[j][i] = true;
                    int ln = i-j+1;
                    if (ans < ln)
                    {
                        ans =ln ;
                        l=j;
                        r=i;
                    }
                }
                else dp[j][i]= false;
            }
        }

        string res = "";
        for (int i = l;i<=r;i++) res += s[i];
        return res;
    }
};
