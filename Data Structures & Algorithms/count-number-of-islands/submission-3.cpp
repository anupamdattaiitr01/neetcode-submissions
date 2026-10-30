class Solution {
private: 
    void bfs (int i, int j, vector <vector <int>> &vis, vector <vector <char>> &grid)
    {
        int n = grid.size();
        int m = grid[0].size();
        queue <pair <int, int>>q ;
        q.push ({i,j});
        while (!q.empty())
        {
            pair <int, int> p = q.front();
            q.pop();
            int row = p.first;
            int col = p.second;
            vis[row][col]=1;
            int drow[] = {-1,0,1,0};
            int dcol[] = {0,-1,0,1};
            for (int i =0;i<4;i++)
            {
                int nrow = row + drow[i];
                int ncol = col + dcol[i];
                if (nrow >=0 && nrow <n && ncol >=0 && ncol <m && vis[nrow][ncol] ==-1 && grid[nrow][ncol] == '1')
                {
                    vis[nrow][ncol] =1;
                    q.push ({nrow, ncol});
                }
            }
        }
    }
public:
    int numIslands(vector<vector<char>>& grid) {
        int n = grid.size();
        int m = grid[0].size();
        vector <vector <int>> vis (n, vector <int> (m, -1));
        int ans =0;
        for (int i =0;i<n;i++)
        {
            for (int j =0;j<m;j++)
            {
                if (vis[i][j] ==-1 && grid[i][j] =='1' )
                {
                    ans++;
                    bfs (i,j, vis, grid);
                }
            }
        }

        return ans;
    }
};
