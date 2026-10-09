class Solution {
public:
    bool isAnagram(string s, string t) {
        vector <int> hash1(26);
        vector <int> hash2(26);

        if (s.length() != t.length()) return false;
        for (int i =0;i<s.length();i++)
        {
            hash1[s[i] -'a']++;
            hash2[t[i] -'a']++;
        }

        return (hash1 == hash2);
    }
};
