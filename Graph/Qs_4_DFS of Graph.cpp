class Solution {
    private:
    void DFS_Traversal(int node,int *visit,vector<int> adj[],vector<int>&dfs)
    {
        //Mark the Current Node as Visited & push into DFS
        visit[node]=1;
        dfs.push_back(node);
        //Traverse Till Depth
        for(auto it:adj[node])
        {
            //If Node is Not Visit then Only Traverse
            if(!visit[it])
            {
                DFS_Traversal(it,visit,adj,dfs);
            }
        }
    }
  public:
    // Function to return a list containing the DFS traversal of the graph.
    vector<int> dfsOfGraph(int V, vector<int> adj[]) {
        // Code here
        int visit[V]={0};
        vector<int>dfs;
        int starting_node=0;
        DFS_Traversal(starting_node,visit,adj,dfs);
        return dfs;
    }
};
