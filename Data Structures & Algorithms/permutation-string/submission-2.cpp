class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        int n = s1.length();
        int m = s2.length();
        if (m <n) return false;
        vector <int> hash1(26);
        vector <int> hash2(26);
        for (int i =0;i<n;i++)
        {
            hash1[s1[i] -'a']++;
            hash2[s2[i] -'a']++;
        }
        if (hash1 == hash2) return true;
        // bool pos = false;
        for (int i =n;i<m;i++)
        {
            hash2[s2[i-n]-'a']--;
            hash2[s2[i]-'a']++;
            if (hash1 == hash2) return true;
        }

        return false;
    }
};
