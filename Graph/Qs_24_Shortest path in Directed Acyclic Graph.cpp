// User function Template for C++
class Solution {
    private:
    void TopoSort(int node, vector < pair < int, int >> adj[],
      int vis[], stack < int > & st) {
      //This is the function to implement Topological sort. 
      vis[node] = 1;
      for (auto it: adj[node]) {
        int v = it.first;
        if (!vis[v]) {
          TopoSort(v, adj, vis, st);
        }
      }
      st.push(node);
    }
  public:
     vector<int> shortestPath(int N,int M, vector<vector<int>>& edges){
        // code here
        vector<pair<int,int>>adj[N];
        // Create the Adjacency list {v,weight}
        for(int i=0;i<M;i++)
        {
            int u=edges[i][0];
            int v=edges[i][1];
            int wt=edges[i][2];
            adj[u].push_back({v,wt});
        }
        // Topo Sort
        int vis[N]={0};
        stack<int>st;
        for(int i=0;i<N;i++)
        {
            if(!vis[i])
            TopoSort(i,adj,vis,st);
        }
        // Stack Storing Topological Order
        vector<int>dist(N,1e9);
        dist[0]=0;
        while(!st.empty())
        {
            int node=st.top();
            st.pop();
            for(auto it:adj[node])
            {
                int nb=it.first;
                int wt=it.second;
                if(dist[node] + wt < dist[nb])
                dist[nb]=dist[node] + wt;
            }
        }
        for(int i=0;i<N;i++)
        {
            if(dist[i]==1e9)
            dist[i]=-1;
        }
        return dist;
    }
};
