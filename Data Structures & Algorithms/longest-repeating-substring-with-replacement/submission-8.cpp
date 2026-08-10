class Solution {
public:
    int characterReplacement(string s, int k) {
        int n = s.length();
        vector <int> hash (26);
        int lo =0;
        int ans =0;
        for (int i=0;i<n;i++)
        {
            hash[s[i] -'A']++;
            int mx_freq = 0;
            for (int j =0;j<26;j++) mx_freq = max (mx_freq, hash[j]);
            int ln = i-lo+1;
            // cout << mx_freq << " " << ln << endl;
            while (lo <i && ln - mx_freq >k)
            {
                hash[s[lo]-'A']--;
                for (int j =0;j<26;j++) mx_freq = max (mx_freq, hash[j]);
                lo++;
                ln = i -lo+1;
            }

            ans = max (ans, ln);
            // cout << lo << " " << i << " " << endl;
            // cout << hash[0] << " " << hash[1] << " " << hash[2] << endl;
            // cout << ans << endl;
        }

        return ans;
    }
};
