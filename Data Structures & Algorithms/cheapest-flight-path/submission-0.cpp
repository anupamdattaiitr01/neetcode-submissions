using pii = pair <int, pair <int, int>> ;

class Solution {
public:
    int findCheapestPrice(int n, vector<vector<int>>& flights, int src, int dst, int k) {
        vector <vector <pair <int, int>>> adj (n);
        int m = flights.size();
        for (int i =0;i<m;i++)
        {
            int u = flights[i][0];
            int v = flights[i][1];
            int w = flights[i][2];
            adj[u].push_back({v,w});
        }

        vector <int> vis (n, 1e9);
        vis[src] =0;
        priority_queue <pii, vector <pii>, greater <pii>> pq;
        pq.push ({0,{0, src}});
        while (!pq.empty())
        {
            pii p = pq.top();
            pq.pop();
            int st = p.first;
            int pr = p.second.first;
            int node = p.second.second;
            for (auto it : adj[node])
            {
                int pr1 = it.second;
                if (vis[it.first] > pr1+ pr && st <= k)
                {
                    vis[it.first] = pr1+ pr;
                    pq.push ({st+1, {pr1+pr, it.first}});
                }
            }
        }

        if (vis[dst]==1e9) return -1;
        else return vis[dst];
    }
};
