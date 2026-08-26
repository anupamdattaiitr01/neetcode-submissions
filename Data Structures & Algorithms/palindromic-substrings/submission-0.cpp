class Solution {
public:
    int countSubstrings(string s) {
        int n = s.length();
        vector <vector <bool>> dp (n, vector <bool> (n,false));
        int ans =0;
        for (int i =0;i<n;i++)
        {
            for (int j = i;j>=0;j--)
            {
                if (i==j)
                {
                    dp[j][j] = true;
                    ans++;
                }
                else if (i-j ==1 && s[i] == s[j])
                {
                    dp[j][i] = true;
                    ans ++;
                }
                else if (s[i] == s[j] && dp[j+1][i-1])
                {
                    dp[j][i] = true;
                    ans ++;
                }
            }
        }

        return ans;
    }
};
