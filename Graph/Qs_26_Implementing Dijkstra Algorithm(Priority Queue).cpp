class Solution
{
	public:
	//Function to find the shortest distance of all the vertices
    //from the source vertex S.
    vector <int> dijkstra(int V, vector<vector<int>> adj[], int S)
    {
        // Code here
        // Initilize Priority Queue
        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>pq;
        pq.push({S,0});
        vector<int>disTo(V,1e9);
        disTo[S]=0;
        while(!pq.empty())
        {
            int dis=pq.top().second;
            int node=pq.top().first;
            pq.pop();
            for(auto it:adj[node])
            {
                int adjNode=it[0];
                int edgeWeight=it[1];
                if(dis + edgeWeight < disTo[adjNode])
                {
                    disTo[adjNode]=dis+edgeWeight;
                    pq.push({adjNode,dis+edgeWeight});
                }
            }
        }
        return disTo;
    }
};
