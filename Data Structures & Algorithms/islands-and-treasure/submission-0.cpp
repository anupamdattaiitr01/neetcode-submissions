using pii = pair <int, pair <int, int>> ;
int inf = 2147483647;
class Solution {
public:
    void islandsAndTreasure(vector<vector<int>>& grid) {
        int n = grid.size();
        int m = grid[0].size();
        vector <vector <int>> vis (n, vector <int> (m, -1));
        queue <pii> q;
        for (int i =0;i<n;i++)
        {
            for (int j =0;j<m;j++)
            {
                if (grid[i][j] ==0)
                {
                    q.push ({0, {i,j}});
                    vis[i][j] =0;
                }
            }
        }

        while (!q.empty())
        {
            pii p = q.front();
            q.pop();
            int t = p.first;
            int row = p.second.first;
            int col = p.second.second;
            int drow[] = {-1,0,1,0};
            int dcol[] = {0,-1,0,1};
            for (int i =0;i<4;i++)
            {
                int nrow = row + drow[i];
                int ncol = col + dcol[i];
                if (nrow >=0 && nrow <n && ncol >=0 && ncol <m && vis[nrow][ncol] == -1 && grid[nrow][ncol] == inf)
                {
                    vis[nrow][ncol]= t+1;
                    q.push ({t+1, {nrow, ncol}});
                }
            }
        }

        for (int i =0;i<n;i++)
        {
            for (int j=0;j<m;j++)
            {
                if (vis[i][j] != -1) grid[i][j] = vis[i][j];
            }
        }
    }
};
