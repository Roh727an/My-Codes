class Solution {
    private:
    bool DFS(int node,int *vis,int *pathvis,vector<int> adj[])
    {
        // Mark as Visited
        vis[node]=1;
        pathvis[node]=1;
        for(auto it:adj[node])
        {
            if(!vis[it])
            {
                if(DFS(it,vis,pathvis,adj))
                return true;
            }
            else if(pathvis[it])
            return true;
        }
        // BackTracking
        pathvis[node]=0;
        return false;
    }
  public:
    // Function to detect cycle in a directed graph.
    bool isCyclic(int V, vector<int> adj[]) {
        // code here
        int vis[V]={0};
        int pathvis[V]={0};
        for(int i=0;i<V;i++)
        {
            if(!vis[i])
            {
                if(DFS(i,vis,pathvis,adj))
                return true;
            }
        }
        return false;
    }
};
