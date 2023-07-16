class Solution {
    bool DFS(int parent,int node,vector<int> adj[],int *vis)
    {
        // Mark as Visited
        vis[node]=1;
        for(auto it:adj[node])
        {
            // If any of the Dfs Call detect a Cycle then it is true
            if(!vis[it])
            {
            if(DFS(node,it,adj,vis))
            return true;
            }
            // If node is already Visited & it is not a Cyce then it Forms a Cycle
            else if(it!=parent)
            return true;
        }
        return false;
    }
  public:
    // Function to detect cycle in an undirected graph.
    bool isCycle(int V, vector<int> adj[]) {
        // Code here
        int vis[V]={0};
        for(int i=0;i<V;i++)
        {
            if(!vis[i])
            {
                if(DFS(-1,i,adj,vis))
                return true;
            }
        }
            return false;
        
    }
};
