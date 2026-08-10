class Solution {
public:
    bool isAnagram(string s, string t) {
        // sort(s.begin(), s.end());
        // sort(t.begin(), t.end());
        // if (s==t) return true;
        // return false;
        vector <int> hash1 (26);
        vector <int> hash2 (26);
        int n1 = s.length();
        int n2 = t.length();
        if (n1 != n2) return false;
        for (int i=0;i<n1;i++)  hash1[s[i]-'a']++;
        for (int i=0;i<n2;i++) hash2[t[i] -'a']++;
        if (hash1 ==hash2) return true;
        return false;
    }
};
