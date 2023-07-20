class Solution
{
	public:
	//Function to find the shortest distance of all the vertices
    //from the source vertex S.
    vector <int> dijkstra(int V, vector<vector<int>> adj[], int S)
    {
        // Code here
        // Initilize Priority Queue
        set<pair<int,int>>st;
        st.insert({S,0});
        vector<int>disTo(V,1e9);
        disTo[S]=0;
        while(!st.empty())
        {
            // iterator Points toward Begin of Set
            auto it=*(st.begin());
            int node=it.first;
            int dis=it.second;
            st.erase(it);
            // Traverse Adjacency 
            for(auto it:adj[node])
            {
                int adjNode=it[0];
                int edgeWeight=it[1];
                if(dis+edgeWeight<disTo[adjNode])
                {
                    // IF it ALready Exists & Doesnot BEtter Than Current -> Erase
                    if(disTo[adjNode]!=1e9)
                    st.erase({adjNode,disTo[adjNode]});
                    
                    disTo[adjNode]=dis+edgeWeight;
                    st.insert({adjNode,disTo[adjNode]});
                }
            }
        }
        return disTo;
    }
};
