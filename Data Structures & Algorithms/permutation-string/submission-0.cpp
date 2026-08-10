class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        int n= s1.length();
        int m= s2.length();
        if (n >m) return false;
        vector <int> hash(26);
        vector <int> hash1(26);
        for (int i=0;i<n;i++)
        {
            hash[s1[i]-'a']++;
            hash1[s2[i] -'a']++;
        }
        int r = n;
        int l = 0;
        if (hash1 == hash) return true;
        while (r < m)
        {
            hash1[s2[r] -'a']++;
            hash1[s2[l] -'a']--;
            if (hash1 == hash) return true;
            l++;
            r++;
        }

        return false;
    }
};
