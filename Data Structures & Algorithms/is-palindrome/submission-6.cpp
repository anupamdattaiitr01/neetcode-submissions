class Solution {
public:
    bool isPalindrome(string s) {
        string t = "";
        for (int i =0;i<s.length();i++)
        {
            if (s[i] >= 'A' && s[i] <= 'Z') 
            {
                s[i] += 32;
                t += s[i];
            }
            else if (s[i] >='a' && s[i] <= 'z') t += s[i];
            else if (s[i] >= '0' && s[i] <='9') t += s[i];
        }
        // cout << t << endl;
        int l =0, r = t.length()-1;
        while (l < r)
        {
            if (t[l] != t[r]) return false;
            l++;
            r--;
        }
        return true;
    }
};
