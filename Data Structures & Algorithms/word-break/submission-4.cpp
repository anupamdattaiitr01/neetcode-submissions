class Solution {
    unordered_map <string, int> mpp;
    // vector <int> dp;
    map <pair<string, int>, int> dp; 
    bool fun (int ind, string t, string &s)
    {
        if (ind== s.length() && t.length()==0) return true;
        else if (ind== s.length()) return false;

        if (dp.find ({t, ind}) != dp.end()) return dp[{t, ind}];
        // if (dp[ind] != -1) return dp[ind];
        t += s[ind];
        string tmp = t;
        if (mpp.find (t) != mpp.end())
        {
            bool a= fun (ind+1,t,s);
            t= "";
            bool b = fun (ind+1,t,s);
            return dp[{tmp,ind}] = a|b;
        }
        else
        {
            return dp[{tmp,ind}] = fun (ind+1,t,s);
        }
    }
public:
    bool wordBreak(string s, vector<string>& wordDict) {
        int m = wordDict.size();
        // map <string, int> mpp;
        // dp.assign (s.length()+1, -1);
        for (int i =0;i<m;i++) mpp[wordDict[i]]++;
        return fun (0, "", s);
    }
};
