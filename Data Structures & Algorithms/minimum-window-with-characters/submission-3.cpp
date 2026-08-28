class Solution {
public:
    string minWindow(string s, string t) {
        int n = s.length();
        int m = t.length();
        if (m > n) return "";

        vector <int> hash1(52);
        for (int i =0;i<m;i++)
        {
            if (t[i] >='A' && t[i] <= 'Z') hash1[t[i]-'A']++;
            else hash1[t[i]-'a'+26]++;
        }

        vector <int> hash2(52);
        int l =0, r =0;
        int ind1 = -1, ind2 = -1;
        int ans = 1e9;
        while (r <n)
        {
            if (s[r] >= 'A' && s[r] <= 'Z') hash2[s[r]-'A']++;
            else hash2[s[r] -'a'+26]++;

            bool pos = true;
            for (int i =0;i<52;i++)
            {
                if (hash1[i] > hash2[i])
                {
                    pos = false;
                    break;
                }
            }

            if (pos)
            {
                while (pos)
                {
                    if (s[l] >='A' && s[l] <= 'Z')
                    {
                        hash2[s[l] -'A']--;
                    }
                    else hash2[s[l] -'a'+26]--;
                    l++;
                    for (int i =0;i<52;i++)
                    {
                        if (hash1[i] > hash2[i])
                        {
                            pos = false;
                            break;
                        }
                    }
                }

                int ln1 = r-l+2;
                if (ln1 < ans)
                {
                    ans = ln1;
                    ind1 = l-1;
                    ind2 = r;
                }
            }
            r++;
        }

        cout << ind1 <<" " << ind2 << endl;
        if (ind1 == -1 || ind2 ==-1) return "";
        else 
        {
            string res ="";
            for (int i =ind1;i<=ind2;i++) res += s[i];
            return res;
        }
    }
};
