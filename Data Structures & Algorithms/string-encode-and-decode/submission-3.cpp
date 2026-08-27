class Solution {
public:
    vector <int> len;
    string encode(vector<string>& strs) {
        string tmp="";
        int n = strs.size();
        for (int i =0;i<n;i++)
        {
            tmp += strs[i];
            // tmp += '#';
            len.push_back(strs[i].size());
        }
        // tmp+= strs[n-1];
        // cout << tmp << endl;
        return tmp;
    }

    vector<string> decode(string s) {
        vector <string> ans;
        int n = len.size();
        int lo = 0;
        for (int i =0;i<n;i++)
        {
            int ln = len[i];
            int hi = lo+ln;
            string tmp ="";
            for (int i =lo;i<hi;i++) tmp += s[i];
            lo = hi;
            ans.push_back(tmp);
        }

        return ans;
    }
};
