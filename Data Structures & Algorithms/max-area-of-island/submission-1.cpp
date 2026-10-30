class Solution {
private: 
    void bfs (int i, int j, int &cnt, vector <vector <int>> &vis, vector <vector <int>> &grid)
    {
        int n = grid.size();
        int m = grid[0].size();
        cnt++;
        vis[i][j]=1;
        queue <pair <int, int>> q;
        q.push ({i,j});
        while (!q.empty())
        {
            pair <int, int> p= q.front();
            q.pop();
            int row = p.first;
            int col = p.second;
            int drow[] = {-1,0,1,0};
            int dcol[] = {0,-1,0,1};
            for (int i=0;i<4;i++)
            {
                int nrow = row + drow[i];
                int ncol = col + dcol[i];
                if (nrow >=0 && nrow <n && ncol >=0 && ncol <m && vis[nrow ][ncol] ==-1 && grid[nrow][ncol] ==1)
                {
                    cnt++;
                    vis[nrow][ncol]=1;
                    q.push ({nrow, ncol});
                }
            }
        }
    }
public:
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        int n = grid.size();
        int m = grid[0].size();
        vector <vector <int>> vis (n, vector <int> (m, -1));
        int ans =0;
        for (int i=0;i<n;i++)
        {
            for (int j =0;j<m;j++)
            {
                if (grid[i][j]==1 && vis[i][j] ==-1)
                {
                    int cnt =0;
                    bfs (i, j, cnt, vis, grid);
                    ans = max (ans, cnt);
                }
            }
        }

        return ans;
    }
};
