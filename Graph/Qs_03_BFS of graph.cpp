class Solution {
  public:
    // Function to return Breadth First Traversal of given graph.
    vector<int> bfsOfGraph(int V, vector<int> adj[]) {
        // Code here
        vector<int> bfs;
        int visit[V]={0};
        visit[0]=1;
        queue<int>q;
        q.push(0);
        while(!q.empty())
        {
            int node=q.front();
            q.pop();
            bfs.push_back(node);
            //BFS TRAVERSAL
            for(auto it:adj[node])
            {
                if(!visit[it])
                {
                    visit[it]=1;
                    q.push(it);
                }
            }
        }
        return bfs;
    }
};
