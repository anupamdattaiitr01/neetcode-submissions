class Solution {
public:
    bool isValid(string s) {
        stack <char> st;
        int n = s.length();
        for (int i=0;i<n;i++)
        {
            if (s[i] == '(') st.push (s[i]);
            else if (s[i] == '{') st.push (s[i]);
            else if (s[i] == '[') st.push (s[i]);
            else 
            {
                if (st.empty()) return false;
                char k = st.top();
                if (s[i] == ')' && k != '(') return false;
                else if (s[i] == '}' && k != '{') return false;
                else if (s[i] ==']' && k != '[') return false;
                else st.pop();
            }
        }

        if (st.empty()) return true;
        else return false;
    }
};
