//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++
class Solution {
    private:
    void DFS(int node,vector<int>adj[],int vis[],int dis[])
    {
        // 4.a. Vis node
        vis[node]=1;
        // 4.b. Traverse it's Adjacent Nodes
        for(auto it:adj[node])
        {
            // 4.c. WE Traverse Only if The Distance is Shorter than The PRevious Distance
            if(dis[it]>dis[node] + 1)
            {
                // 4.d. Update Distance & Recursive Function Call
                dis[it]=dis[node]+1;
                DFS(it,adj,vis,dis);
            }
        }
    }
  public:
    vector<int> shortestPath(vector<vector<int>>& edges, int N,int M, int src){

        // 1. Create a Visited Array & Initilize with 0
        int vis[N]={0};
        // Adjacency List
        vector<int> adj[N]; 
        
        for(auto it : edges) {
            adj[it[0]].push_back(it[1]); 
            adj[it[1]].push_back(it[0]); 
        }
        // 2. Create A Distance Array & Initilize with INT_MAX
        int dis[N];
        for(int i=0;i<N;i++)
        {
            dis[i]=1e9;
        }
        // 3. Mark Source Node Distance as 0 as it is our Initial Node
        dis[src]=0;
        // 4. Call DFS FUNCTION FOr Source Node 
        DFS(src,adj,vis,dis);
        // 5. Create a Ans Array & Traverse Across Distance Array 
        vector<int>ans(N,-1);
        for(int i=0;i<N;i++)
        {
            if(dis[i]!=1e9)
            ans[i]=dis[i];
        }
        //  REturn ans
        return ans;
    }
};


//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m; cin >> n >> m;
        vector<vector<int>> edges;

        for (int i = 0; i < m; ++i) {
            vector<int> temp;
            for(int j=0; j<2; ++j){
                int x; cin>>x;
                temp.push_back(x);
            }
            edges.push_back(temp);
        }

        int src; cin >> src;

        Solution obj;

        vector<int> res = obj.shortestPath(edges, n, m, src);

        for (auto x : res){
            cout<<x<<" ";
        }
        cout << "\n";
    }
}

// } Driver Code Ends
