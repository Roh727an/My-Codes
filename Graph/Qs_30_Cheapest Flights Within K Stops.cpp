//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    int CheapestFLight(int n, vector<vector<int>>& flights, int src, int dst, int K)  {
        // Code here
        // 1.Create Adjacency List Accoring To Graph u->{v,cost}
        vector<pair<int,int>>adj[n];
        for(auto it:flights)
        {
            adj[it[0]].push_back({it[1],it[2]});
        }
        
        // 2.Create a Cost array(MAX) & A Queue(stops,{node,cost}) 
        vector<int>costTo(n,1e9);
        queue<pair<int,pair<int,int>>>q;
        
        // 3.Mark source Cost with 0 & push it into queue(0,0)
        costTo[src]=0;
        q.push({0,{src,0}});
        // 4.Pop the element at the front of the queue and look out for its adjacent nodes
        while(!q.empty())
        {
            auto it=q.front();
            q.pop();
            
            int stops=it.first;
            int node=it.second.first;
            int cost=it.second.second;
            
            // 4.a.if Stops is Already Exceed Maximum Stops,We cannot Move Further
            if(stops>K)
            continue;
            // 4.b.if not then we can move further & check for it's Adjacency Nodes
            for(auto itr:adj[node])
            {
                int adjNode=itr.first;
                int adjcost=itr.second;
                
                // 4.c.Check if Current COst is Less than Previous && check if stop is less than K
                if(adjcost+cost < costTo[adjNode] && stops<=K)
                {
                    // 4.d.Update  Cost of Current Node & Push it with +1increased Stop
                    costTo[adjNode]=adjcost+cost;
                    q.push({stops+1,{adjNode,costTo[adjNode]}});
                }
            }
        }
        // 5.After Traversal check our costTo[dist] is answer ;if it is still INT max return -1
        if(costTo[dst]==1e9) return -1;
        return costTo[dst];
    }
};

//{ Driver Code Starts.
int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int n; cin>>n;
        int edge; cin>>edge;
        vector<vector<int>> flights;
        
        for(int i=0; i<edge; ++i){
            vector<int> temp;
            for(int j=0; j<3; ++j){
                int x; cin>>x;
                temp.push_back(x);
            }
            flights.push_back(temp);
        }
        
        int src,dst,k;
        cin>>src>>dst>>k;
        Solution obj;
        cout<<obj.CheapestFLight(n,flights,src,dst,k)<<"\n";
    }
    return 0;
}
// } Driver Code Ends
