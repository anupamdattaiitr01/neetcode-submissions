class Solution {
public:
    int characterReplacement(string s, int k) {
        int n = s.length();
        vector <int> hash (26);
        int mx_freq = 0;
        int l =0;
        int ans =0;
        for (int i =0;i<n;i++)
        {
            hash[s[i] -'A']++;
            mx_freq = max (mx_freq, hash[s[i] -'A']);
            int ln = i-l+1;
            while (ln -mx_freq >k)
            {
                hash[s[l] -'A']--;
                l++;
                for (int i =0;i<26;i++) mx_freq = max (mx_freq, hash[i]);
                ln = i-l+1;
            }
            ans = max (ans, ln);
        }

        return ans;
    }
};
