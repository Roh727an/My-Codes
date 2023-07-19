//User function Template for C++

class Solution {
    private:
    void DFS(int node,vector<int> adj[],int *vis)
    {
        vis[node]=1;
        for(auto it:adj[node])
        {
            if(!vis[it])
            {
                DFS(it,adj,vis);
            }
        }
    }
  public:
    int numProvinces(vector<vector<int>> adj, int V) {
        // code here
        int vis[V]={0};
        // create Adjecency List
        vector<int> ls[V];
        // Create Adjacency List From Adjacency Matrix
        for(int i=0;i<V;i++)
        {
            for(int j=0;j<V;j++)
            {
                if(adj[i][j]==1 && i!=j)
                {
                    ls[i].push_back(j);
                    ls[j].push_back(i);
                }
            }
        }
        //For each Node Traverse
        int Provinces=0;
        for(int i=0;i<V;i++)
        {
            if(!vis[i])
            {
                Provinces++;
                DFS(i,ls,vis);
            }
        }
        return Provinces;
    }
};
