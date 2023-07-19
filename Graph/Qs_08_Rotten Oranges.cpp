class Solution {
  private:
    void BFS(int row,int col,vector<vector<int>>& vis,vector<vector<char>> grid)
    {
        // Mark it Visited
        vis[row][col]=1;
        // Create a Queue {row,col}
        queue<pair<int,int>> q;
        // Push first Element/Island
        q.push({row,col});
        
        int t_row=grid.size();
        int t_col=grid[0].size();
        
    
        while(!q.empty())
        {
            // Take out the row,col of First Island
            int r=q.front().first;
            int c=q.front().second;
            q.pop();
            // Traverse it's all Neighbours
            for(int drow=-1;drow<=1;drow++)
            {
                for(int dcol=-1;dcol<=1;dcol++)
                {
                    // New Row& Col || Neigbour row,col
                    int nrow=r+drow;
                    int ncol=c+dcol;
                    // in Range(row,col) && not Visited && an Island
                   if(((nrow>=0 && nrow<t_row) && (ncol>=0 && ncol<t_col)) 
                   && (!vis[nrow][ncol]) && (grid[nrow][ncol]=='1'))
                   {
                    // Mark as Visited
                    vis[nrow][ncol]=1;
                    // push into Queue
                    q.push({nrow,ncol});
                   }
                }
            }

        }
    }
  public:
    // Function to find the number of islands.
    int numIslands(vector<vector<char>>& grid) {
        // Code here
        int n=grid.size();
        int m=grid[0].size();
        // Create a Visit array/Matrix
        vector<vector<int>> vis(n,vector<int>(m,0));
        int island=0;
        for(int row=0;row<n;row++)
        {
            for(int col=0;col<m;col++)
            {
                // If not Visited & an Island
                if(!vis[row][col] && grid[row][col]=='1')
                {
                    island++;
                    // cout<<row<<" "<<col<<endl;
                    BFS(row,col,vis,grid);
                }
            }
        }
        return island;
    }
};
