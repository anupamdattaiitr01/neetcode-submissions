class Solution {
public:
    vector<vector<int>> pacificAtlantic(vector<vector<int>>& heights) {
        int n = heights.size();
        int m = heights[0].size();
        vector <vector <int>> vis1(n, vector <int> (m, -1));
        vector <vector <int>> vis2(n, vector <int> (m, -1));
        queue <pair <int, int>> q1;
        queue <pair <int, int>> q2;
        for (int i =0;i<m;i++)
        {
            q1.push ({0,i});
            vis1[0][i]=1;
        }

        for (int i =0;i<n;i++)
        {
            vis1[i][0]=1;
            q1.push ({i,0});
        }

        for (int i =0;i<n;i++)
        {
            vis2[i][m-1]=1;
            q2.push ({i, m-1});
        }

        for (int j =0;j<m;j++)
        {
            vis2[n-1][j]=1;
            q2.push ({n-1, j});
        }

        while (!q1.empty())
        {
            pair <int, int> p = q1.front();
            q1.pop();
            int row = p.first;
            int col = p.second;
            int drow[] = {-1,0,1,0};
            int dcol[] = {0,-1,0,1};
            for (int i =0;i<4;i++)
            {
                int nrow = row + drow[i];
                int ncol = col + dcol[i];
                if (nrow >=0 && nrow <n && ncol >=0 && ncol <m && vis1[nrow][ncol]==-1 && heights[nrow][ncol] >= heights[row][col])
                {
                    vis1[nrow][ncol]=1;
                    q1.push ({nrow, ncol});
                }
            }
        }

        while (!q2.empty())
        {
            pair <int, int> p = q2.front();
            q2.pop();
            int row = p.first;
            int col = p.second;
            int drow[] = {-1,0,1,0};
            int dcol[] = {0,-1,0,1};
            for (int i =0;i<4;i++)
            {
                int nrow = row + drow[i];
                int ncol = col + dcol[i];
                if (nrow >=0 && nrow <n && ncol >=0 && ncol <m && vis2[nrow][ncol]==-1 && heights[nrow][ncol] >= heights[row][col])
                {
                    vis2[nrow][ncol]=1;
                    q2.push ({nrow, ncol});
                }
            }
        }

        vector <vector <int>> ans;
        for (int i =0;i<n;i++)
        {
            for (int j =0;j<m;j++)
            {
                if (vis1[i][j] ==1 && vis2[i][j] ==1)
                {
                    ans.push_back({i,j});
                }
            }
        }

        return ans;
    }
};
