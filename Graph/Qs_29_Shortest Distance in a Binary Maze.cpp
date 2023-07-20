//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    int shortestPath(vector<vector<int>> &grid, pair<int, int> source,
                     pair<int, int> destination) {
        // code here
        // Corner Case => sSource =Destination
        if(source.first==destination.first && source.second==destination.second)
        return 0;
        // We apply Dijkstra's Algorithm with Queue 
        int n=grid.size();
        int m=grid[0].size();
        // 1.Create a Queue(Distance,{row,col}) & 
        // Create a 2D DIstance Array(MAX) of Same size of Grid
        queue<pair<int,pair<int,int>>>q;
        vector<vector<int>> disTo(n,vector<int>(m,1e9));
        
        // 3.Mark Source Node Distance as 0 & Push into Queue
        disTo[source.first][source.second]=0;
        q.push({0,{source.first,source.second}});
        
        // 4.Pop the element at the front of the queue and look out for its adjacent nodes
        int delrow[4]={-1,0,+1,0};
        int delcol[4]={0,+1,0,-1};
        
        while(!q.empty())
        {
            auto it=q.front();
            q.pop();
            int dis=it.first;
            int row=it.second.first;
            int col=it.second.second;
            
            // 4.A.Check 4 Directions
            for(int i=0;i<4;i++)
            {
                int nrow=row+delrow[i];
                int ncol=col+delcol[i];
                // 4.B.Check if it is In Range
                if(nrow>=0 && nrow<n && ncol>=0 && ncol<m && grid[nrow][ncol]==1 
                  && dis+1 < disTo[nrow][ncol])
                 {
                    //  4.C.check if it is Destination or Not
                    if(destination.first==nrow && destination.second==ncol)
                    return dis+1;
                    //  4.D.Update Distance & push into Queue
                    disTo[nrow][ncol]=dis+1;
                    q.push({dis+1,{nrow,ncol}});
                 }
            }
        }
        // 5.If not Found After All Traversal of Grid Return -1
        return -1;
    }
};


//{ Driver Code Starts.
int main() {

    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        vector<vector<int>> grid(n, vector<int>(m));

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cin >> grid[i][j];
            }
        }

        pair<int, int> source, destination;
        cin >> source.first >> source.second;
        cin >> destination.first >> destination.second;
        Solution obj;
        cout << obj.shortestPath(grid, source, destination) << endl;
    }
}

// } Driver Code Ends
