//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Disjoint{
    // Size Array & Parent Array
    vector <int> size,parent;
    public: 
    // Create Constructor to Initilize These Array
    Disjoint(int n)
    {
        // Initilize Size of All Nodes as 1
        size.resize(n+1,0);
        // Initilize Parent of All Nodes as itself
        parent.resize(n+1);
        for(int i=0;i<n;i++)
        {
            parent[i]=i;
        }
    }
    // Create FindParent Function with Path Comprassion(Backtracking)
    int FindParent(int node)
    {
        if(node==parent[node])
        return node;
        // Save the Ultimate Parent OR Path Comprassion
        parent[node]=FindParent(parent[node]);
        return parent[node];
    }
    // Create Union Function
    void Union(int u,int v)
    {
        // Find Ultimate Parent of u & v
        int pu=FindParent(u);
        int pv=FindParent(v);
        // Compare their Size
        // Conncent Smaller One To Larger one &  Update Larger Size with Smaller Size
        if(size[pu] > size[pv])
        {
            parent[pv]=pu;
            size[pu]+=size[pv];
        }
        // If Both Are same Size then Connect To Any Any
        {
            parent[pu]=pv;
            size[pv]+=size[pu];
        }
    }
};



class Solution
{
	public:
	//Function to find sum of weights of edges of the Minimum Spanning Tree.
    int spanningTree(int V, vector<vector<int>> adj[])
    {
        // Kruskal's Algorithm
        vector<pair<int,pair<int,int>>>edges;
        for(int i=0;i<V;i++)
        {
            // Parent Node->i
            for(auto it:adj[i])
            {
            //   Child Node-> it
                int adjNode=it[0];
                int wt=it[1];
                edges.push_back({wt,{i,adjNode}});
            }
        }
        // Sort The Edge 
        sort(edges.begin(),edges.end());
        // Declare Disjoint Data Structure
        Disjoint ds(V);
        int MstWt=0;
        for(auto it:edges)
        {
            
            int wt=it.first;
            int u=it.second.first;
            int v=it.second.second;
            // If they Are Same Component Do Nothing
            // ?If the Are Not then Add into Our Mst->there Parent Must be Differnet
            if(ds.FindParent(u)!=ds.FindParent(v))
            {
                // Add into Mst
                MstWt+=wt;
                // Union/Edge btw u-v in our MST
                ds.Union(u,v);
            }
        }
        return MstWt;
    }
};

//{ Driver Code Starts.


int main()
{
    int t;
    cin >> t;
    while (t--) {
        int V, E;
        cin >> V >> E;
        vector<vector<int>> adj[V];
        int i=0;
        while (i++<E) {
            int u, v, w;
            cin >> u >> v >> w;
            vector<int> t1,t2;
            t1.push_back(v);
            t1.push_back(w);
            adj[u].push_back(t1);
            t2.push_back(u);
            t2.push_back(w);
            adj[v].push_back(t2);
        }
        
        Solution obj;
    	cout << obj.spanningTree(V, adj) << "\n";
    }

    return 0;
}


// } Driver Code Ends
