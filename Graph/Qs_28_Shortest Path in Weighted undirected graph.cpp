class Solution {
  public:
    vector<int> shortestPath(int n, int m, vector<vector<int>>& edges) {
        // Code here
        // Create Adjacecny List
        vector<pair<int,int>>adj[n+1];
        for(auto it:edges)
        {
            int u=it[0];
            int v=it[1];
            int wt=it[2];
            adj[u].push_back({v,wt});
            adj[v].push_back({u,wt});
        }
        // 1.Create a Set(pair) & Create a Distance array (INT MAX)
        set<pair<int,int>>st;
        vector<int>disTo(n+1,1e9);
        // 2.Mark source Node distance as 0 & push it into the Set
        disTo[1]=0;
        st.insert({1,0});
        // 3.Create a Parent Array for Memoization,i.e,to remember which node comes from which node
        int parent[n+1];
        // Initilize with same Index
        for(int i=1;i<=n;i++)
        {
            parent[i]=i;
        }
        // Dijktra's Algorithm
        while(!st.empty())
        {
            auto it=*(st.begin());
            st.erase(it);
            int dis=it.second;
            int node=it.first;
            
            for(auto it:adj[node])
            {
                int adjNode=it.first;
                int edgeWeight=it.second;
                if(edgeWeight + dis < disTo[adjNode])
                {
                    disTo[adjNode]=edgeWeight + dis;
                    st.insert({adjNode,edgeWeight + dis});
                    // Whenever Update make sure to update Parent
                    parent[adjNode]=node;
                }
            }
        }
        // Create a ans Array 
        //run a loop starting from the destination node storing the node’s parent 
        //and then moving to the parent again (backtrack) till the parent[node] 
        //becomes equal to the node itself.
        vector<int>ans;
        int nd=n;
        while(parent[nd]!=nd)
        {
            ans.push_back(nd);
            nd=parent[nd];
        }
        
        if(ans.size()==0)
        return {-1};
        ans.push_back(1);
        // Reverse the ans to get correct order answer 1->N
        reverse(ans.begin(),ans.end());
        return ans;
    }
};
