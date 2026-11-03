class Solution {
public:
    vector<int> findOrder(int numCourses, vector<vector<int>>& prerequisites) {
        int n = numCourses;
        vector <vector <int>> adj (n);
        vector <int> ind (n,0);
        vector <int> vis (n, -1);
        for (int i =0;i<prerequisites.size();i++)
        {
            vector <int> tmp = prerequisites[i];
            int u= tmp[1];
            int v= tmp[0];
            adj[u].push_back(v);
            ind[v]++;
        }
        
        queue <int> q;
        vector <int> nodes;
        for (int i =0;i<n;i++)
        {
            if (vis[i] ==-1 && ind[i]==0)
            {
                q.push (i);
                vis[i]=1;
                nodes.push_back(i);
            }
        }

        while (!q.empty())
        {
            int node1 = q.front();
            q.pop ();
            for (auto it: adj[node1])
            {
                if (vis[it] ==-1)
                {
                    ind[it]--;
                    if (ind[it] ==0)
                    {
                        vis[it] ==1;
                        q.push (it);
                        nodes.push_back(it);
                    }
                }
            }
        }
        

        if (nodes.size() <n) return {};
        else return nodes;
    }
};
