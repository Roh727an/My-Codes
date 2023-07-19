class Solution {
    private:
    bool BFS(int src,vector<int> adj[],int *vis)
    {
        // Mark as Visited
        vis[src]=1;
        // Queue as <src,nextNode>
        queue<pair<int,int>>q;
        q.push({-1,src});
        // BFS
        while(!q.empty())
        {
            // Take out Src & Parent Node
            int node=q.front().second;
            int parent=q.front().first;
            q.pop();
            // Cehck Adjacent Nodes from Adjacency List
            for(auto it:adj[node])
            {
                // Not Visited Previously
                if(!vis[it])
                {
                    // Mark as Visisted & Push in Queue
                    q.push({node,it});
                    vis[it]=1;
                }
                // Already Visisted
                // If it is Not Parent Node Then There is A Cycle
                else if (parent!=it)
                return true;
            }
        }
        return false;
    }
  public:
    // Function to detect cycle in an undirected graph.
    bool isCycle(int V, vector<int> adj[]) {
        // Code here
        // Declare a Vis array
        int vis[V]={0};
        // Travers for all Adjacent Nodes & Check if Any of the nodes forms a Cycle or Not
        for(int i=0;i<V;i++)
        {
            if(!vis[i])
            {
                // If any of the Node Detect Cycle  return true
                if(BFS(i,adj,vis))
                return true;
            }
        }
        return false;
    }
};
