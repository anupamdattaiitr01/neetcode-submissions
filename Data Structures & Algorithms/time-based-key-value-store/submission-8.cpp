class TimeMap {
    unordered_map <string, vector <pair <int,string>>> mpp;
public:
    TimeMap() {
        
    }
    
    void set(string key, string value, int timestamp) {
        mpp[key].emplace_back(timestamp, value);
    }
    
    string get(string key, int timestamp) {
        if (mpp.find (key) == mpp.end()) return "";
        vector <pair <int, string>> &tmp = mpp[key];
        int lo = 0, hi = tmp.size()-1;
        // if (timestamp >= tmp[hi].first) return tmp[hi].second;
        // sort(tmp.begin(), tmp.end());
        string res = "";
        while (lo <= hi)
        {
            int mid = lo + (hi-lo)/2;
            if (tmp[mid].first <= timestamp)
            {
                res = tmp[mid].second;
                lo = mid+1;
                // break;
            }
            else hi = mid-1;
        }

        return res;
    }
};
