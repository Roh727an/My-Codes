// User function Template for C++

class Solution {
  public:
    int numberOfEnclaves(vector<vector<int>> &grid) {
        // Code here
        int n=grid.size();
        int m=grid[0].size();
        int cnt=0;
        vector<vector<int>> vis(n,vector<int>(m,0));
        queue<pair<int,int>>q;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                // Border 
                if(grid[i][j]==1 && (i==0 && j<m || j==0 && i<n || i==n-1 && j<m || j==m-1 && i<n))
                {
                    vis[i][j]=1;
                    q.push({i,j});
                }
            }
        }
        // Got the Staring Points
        int delrow[]={-1,0,1,0};
        int delcol[]={0,-1,0,1};
        while(!q.empty())
        {
            int row=q.front().first;
            int col=q.front().second;
            q.pop();
            for(int i=0;i<4;i++)
            {
            int nrow=row+delrow[i];
            int ncol=col+delcol[i];
            if(nrow<n && nrow>=0 && ncol<m && ncol>=0 && grid[nrow][ncol]==1 && !vis[nrow][ncol])
            {
                vis[nrow][ncol]=1;
                q.push({nrow,ncol});
            }
            }
        }
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(vis[i][j]==0 && grid[i][j]==1)
                cnt++;
            }
        }
        return cnt;
    }
};
