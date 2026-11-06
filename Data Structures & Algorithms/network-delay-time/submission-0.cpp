using pii = pair <int, int>;
class Solution {
public:
    int networkDelayTime(vector<vector<int>>& times, int n, int k) {
        vector <vector <pair <int, int>>> adj (n+1);
        for (int i =0;i<times.size();i++)
        {
            int u = times[i][0];
            int v = times[i][1];
            int t = times[i][2];
            adj[u].push_back({v,t});
        }

        priority_queue <pii, vector <pii>, greater <pii>> pq;
        vector <int> vis (n+1, 1e9);
        vis[k] =0;
        pq.push ({0,k});
        while (!pq.empty())
        {
            pii p = pq.top();
            int node = p.second;
            int t = p.first;
            pq.pop();
            for (auto it: adj[node])
            {
                int ex_t = it.second;
                int node1 = it.first;
                if (vis[node1] > ex_t +t)
                {
                    vis[node1] = ex_t + t;
                    pq.push ({ex_t+t, node1});
                }
            }
        }

        int ans = -1;
        for (int i =1;i<=n;i++)
        {
            if (vis[i] ==1e9) return -1;
            else ans = max (ans, vis[i]);
        }

        return ans;
    }
};
