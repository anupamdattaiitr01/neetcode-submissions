class Solution {
public:
    string longestPalindrome(string s) {
        int n = s.length();
        vector <vector <int>> dp (n+1, vector <int> (n+1, 0));
        int ln =0; int ind = -1;
        for (int i =0;i<n;i++)
        {
            for (int j = i;j>=0;j--)
            {
                if (s[i] == s[j] && i-j <=1)
                {
                    dp[j][i]=1;
                    int ln1 = i-j+1;
                    if (ln1 > ln)
                    {
                        ln = ln1;
                        ind = j;
                    }
                } 
                else if (s[i]== s[j] && dp[j+1][i-1]) 
                {
                    dp[j][i]=1;
                    int ln1 = i-j+1;
                    if (ln1 > ln)
                    {
                        ln = ln1;
                        ind = j;
                    }
                }
            }
        }

        cout << ind << " " << ln << endl;
        string res = "";
        for (int i =ind;i<ind+ln;i++) res += s[i];
        return res;
    }
};
