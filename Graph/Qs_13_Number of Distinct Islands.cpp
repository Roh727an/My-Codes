// User function Template for C++

class Solution {
    private:
    void DFS(int row,int col,vector<vector<int>>& grid,vector<vector<int>>& vis,vector<pair<int,int>>&vec,int row0,int col0)
    {
        int n=grid.size();
        int m=grid[0].size();
        // Mark as Visisted 3
        vis[row][col]=1;
        // Push into Vector Pair
        vec.push_back({row-row0,col-col0});
        // Check for all 4 Directions
        int delrow[]={+1,0,-1,0};
        int delcol[]={0,+1,0,-1};
        for(int i =0 ;i<4;i++)
        {
            int nrow=row+delrow[i];
            int ncol=col+delcol[i];
            // Check
            if(nrow>=0 && nrow<n && ncol<m && ncol>=0 && !vis[nrow][ncol] && grid[nrow][ncol]==1)
            {
                DFS(nrow,ncol,grid,vis,vec,row0,col0);
            }
        }
    }
  public:
    int countDistinctIslands(vector<vector<int>>& grid) {
        // code here
        int n=grid.size();
        int m=grid[0].size();
        vector<vector<int>>vis(n,vector<int>(m,0));
        set<vector<pair<int,int>>> st;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(!vis[i][j] && grid[i][j]==1)
                {
                    // Create A Vector of Pair To Store The (row,col)
                    vector<pair<int,int>>vec;
                    // Call DFS FUNCTION
                    DFS(i,j,grid,vis,vec,i,j);
                    // Push The Pairs of (row,col) in Set
                    st.insert(vec);
                }
            }
        }
        return st.size();
    }
};
