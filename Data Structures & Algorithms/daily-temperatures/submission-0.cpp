class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        int n = temperatures.size();
        stack <pair <int, int>> st;
        vector <int> ans(n);
        for (int i =n-1;i>=0;i--)
        {
            int num = temperatures[i];
            while (!st.empty() && st.top().first <= num) st.pop();
            if (st.size() ==0) ans[i] =0;
            else 
            {
                pair <int, int> p = st.top();
                int diff = p.second -i;
                ans[i] = diff;
            }
            st.push ({num, i});
        }

        return ans;
    }
};
