class Solution
{
	public:
	//Function to find sum of weights of edges of the Minimum Spanning Tree.
    int spanningTree(int V, vector<vector<int>> adj[])
    {
        // Prim's Algorithm
        // code here
        // 1.Create A Priority Queue & Visited Array(0)
        priority_queue<
        pair<int, int>,
		vector<pair<int, int>>, 
		greater<pair<int, int>>
		> pq;
        vector<int>vis(V,0);
        // 2.Push First Node  into Queue
        // {EdgeWeight,node}
        pq.push({0,0});
        int sum=0;
        while(!pq.empty())
        {
            auto it=pq.top();
            int node=it.second;
            int wt=it.first;
            pq.pop();
            
            // If the Node is Already Visited Don't Do Anything
            if(vis[node]==1)
            continue;
            
            // If the Node is Not Visited Mark it Visited
            vis[node]=1;
            // Add it into Our Minimum Spanning Tree
            sum+=wt;
           // Traverse all it's Adjacent Node
            for(auto it:adj[node])
            {
                int adjNode=it[0];
                int edgeWeight=it[1];
                if(!vis[adjNode])
                {
                    pq.push({edgeWeight,adjNode});
                }
            }
        }
        return sum;
    }
};
