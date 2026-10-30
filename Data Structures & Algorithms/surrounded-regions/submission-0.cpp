class Solution {
public:
    void solve(vector<vector<char>>& board) {
        int n = board.size();
        int m = board[0].size();
        queue <pair <int, int>> q;
        vector <vector <int>> vis (n, vector <int> (m, -1));
        for (int i =0;i<n;i++)
        {
            if (board[i][0] =='O') 
            {
                q.push ({i,0});
                vis[i][0] =1;
            }
            if (board[i][m-1] =='O') 
            {
                q.push ({i,m-1});
                vis[i][m-1] =1;
            }
        }

        for (int j =1;j<m-1;j++)
        {
            if (board[0][j] =='O')
            {
                q.push ({0,j});
                vis[0][j]=1;
            }
            if (board[n-1][j] =='O')
            {
                q.push ({n-1,j});
                vis[n-1][j] =1;
            }
        }

        cout << q.size() << endl;
        while (!q.empty ())
        {
            pair <int, int> p=q.front();
            q.pop();
            int row = p.first;
            int col = p.second;
            int drow[] = {-1,0,1,0};
            int dcol[] = {0,-1,0,1};
            for (int i =0;i<4;i++)
            {
                int nrow = row + drow[i];
                int ncol = col + dcol[i];
                if (nrow >= 0 && nrow <n && ncol >=0 && ncol < m && vis[nrow][ncol] ==-1 && board[nrow][ncol] =='O')
                {
                    vis[nrow][ncol] = 1;
                    // board[nrow][ncol] ='';
                    q.push ({nrow, ncol});
                }
            }
        }

        for (int i =0;i<n;i++)
        {
            for (int j =0;j<m;j++)
            {
                if (board[i][j] =='O' && vis[i][j] ==-1) board[i][j] ='X';
            }
        }

    }
};
