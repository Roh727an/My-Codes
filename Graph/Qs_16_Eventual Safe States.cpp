// User function Template for C++

class Solution {
    private:
    bool DFS(int node,int vis[],int pathvis[],int check[],vector<int> adj[])
    {
        vis[node]=1;
        pathvis[node]=1;
        check[node]=0;
        for(auto it:adj[node])
        {
            // Not Visited
            if(!vis[it])
            {
                if(DFS(it,vis,pathvis,check,adj)==true)
                return true;
            }
            // Already Visisted
            else if(pathvis[it])
            {
                return true;
            }
        }
        // Back Tracking
        check[node]=1;
        pathvis[node]=0;
        return false;
    }
  public:
    vector<int> eventualSafeNodes(int V, vector<int> adj[]) {
        // code here
        // Extension of Cycle Detection Question
        // A node cannot be called safe node if -
        // 1.Part of a Cycle
        // 2.Leading towards a Cycle
        int vis[V]={0};
        int pathvis[V]={0};
        int check[V]={0};
        vector<int> safeNodes;
        for(int i=0;i<V;i++)
        {
            if(!vis[i])
            DFS(i,vis,pathvis,check,adj);
        }
        for(int i=0;i<V;i++)
        {
            if(check[i]==1)
            safeNodes.push_back(i);
        }
        return safeNodes;
    }
};
