class Solution {
public:
    int characterReplacement(string s, int k) {
        int n = s.length();
        vector <int> hash (26);
        int lo =0;
        int ans =0;
        int mx_freq = 0;
        for (int i=0;i<n;i++)
        {
            hash[s[i] -'A']++;
            // for (int j =0;j<26;j++) mx_freq = max (mx_freq, hash[j]);
            mx_freq = max (mx_freq, hash[s[i] -'A']);
            int ln = i-lo+1;
            while (lo <i && ln - mx_freq >k)
            {
                hash[s[lo]-'A']--;
                for (int j =0;j<26;j++) mx_freq = max (mx_freq, hash[j]);
                lo++;
                ln = i -lo+1;
            }

            ans = max (ans, ln);
        }

        return ans;
    }
};
