class Solution {
    unordered_map <string, int> mpp;
    map <pair<string, int>, int> dp; 
    unordered_map <string, int> dp1;
    bool fun (int ind, string t, string &s)
    {
        if (ind== s.length() && t.length()==0) return true;
        else if (ind== s.length()) return false;

        // if (dp.find ({t, ind}) != dp.end()) return dp[{t, ind}];
        if (dp1.find (t) != dp1.end()) return dp1[t];
        t += s[ind];
        string tmp = t;
        if (mpp.find (t) != mpp.end())
        {
            bool a= fun (ind+1,t,s);
            t= "";
            bool b = fun (ind+1,t,s);
            // return dp[{tmp,ind}] = a|b;
            return dp1[tmp] = a|b;
        }
        else
        {
            // return dp[{tmp,ind}] = fun (ind+1,t,s);
            return dp1[tmp] = fun (ind+1, t,s);
        }
    }
public:
    bool wordBreak(string s, vector<string>& wordDict) {
        int m = wordDict.size();
        for (int i =0;i<m;i++) mpp[wordDict[i]]++;
        return fun (0, "", s);
    }
};
