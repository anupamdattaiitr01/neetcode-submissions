class Solution {
    void dfs (int node, vector <int> &vis, vector <vector <int>> &adj)
    {
        vis[node]=1;
        for (auto it: adj[node])
        {
            if (vis[it]==-1)
            {
                dfs (it, vis, adj);
            }
        }
    }
public:
    int countComponents(int n, vector<vector<int>>& edges) {
        vector <vector <int>> adj (n);
        int m = edges.size();
        for (int i =0;i<m;i++)
        {
            int u = edges[i][0];
            int v = edges[i][1];
            adj[u].push_back(v);
            adj[v].push_back(u);
        }

        vector <int> vis (n, -1);
        int ans =0;
        for (int i =0;i<n;i++)
        {
            if (vis[i]==-1)
            {
                ans++;
                dfs (i, vis,adj);
            }
        }

        return ans;
    }
};
