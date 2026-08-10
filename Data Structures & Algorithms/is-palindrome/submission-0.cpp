class Solution {
public:
    bool isPalindrome(string s) {
        string ans ="";
        int n = s.length();
        for (int i =0;i<n;i++)
        {
            if (s[i] >= 'A' && s[i] <= 'Z') 
            {
                char k = s[i] + 32;
                ans +=k;
            }
            else if (s[i] >= 'a' && s[i] <= 'z') ans += s[i];
            else if (s[i] >= '0' && s[i] <= '9') ans += s[i];
            else continue;
        }

        cout << ans << endl;
        int l=0, h = ans.length()-1;
        while (l <h)
        {
            if (ans[l] != ans[h])return false;
            l++;
            h--;
        }

        return true;
    }
};
