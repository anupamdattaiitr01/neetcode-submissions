class Solution {
private: 
    vector <int> ln;
public:

    string encode(vector<string>& strs) {
        string res ="";
        for (int i =0;i<strs.size();i++)
        {
            ln.push_back(strs[i].length ());
            res += strs[i];
        }

        return res;
    }

    vector<string> decode(string s) {
        string tmp ="";
        vector <string> ans;
        int l =0;
        for (int i =0;i<ln.size();i++)
        {
            for (int j = l;j<l+ln[i];j++)
            {
                tmp+= s[j];
            }
            ans.push_back(tmp);
            tmp ="";
            l = l+ln[i];
        }

        return ans;
    }
};
