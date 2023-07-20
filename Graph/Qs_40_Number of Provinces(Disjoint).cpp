//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++
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
class Solution {
  public:
    int numProvinces(vector<vector<int>> adj, int V) {
        // code here
        // Create the Dijoint Set Data Structure;
        Disjoint ds(V);
        // if there is a u-v edge we Create in Our Ds by Union & 
        // The Parent will Automatically Updated no Need to Worry
        for(int u=0;u<V;u++)
        {
            for(int v=0;v<V;v++)
            {
                if(adj[u][v]==1)
                ds.Union(u,v);
            }
        }
        // Count the Number of Ultimate Parrent/Boss using FindParent Funtion
         int cnt=0;
        for(int i=0;i<V;i++){
            if(ds.FindParent(i)==i)
            cnt++;
        }
        return cnt;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int V,x;
        cin>>V;
        
        vector<vector<int>> adj;
        
        for(int i=0; i<V; i++)
        {
            vector<int> temp;
            for(int j=0; j<V; j++)
            {
                cin>>x;
                temp.push_back(x);
            }
            adj.push_back(temp);
        }
        

        Solution ob;
        cout << ob.numProvinces(adj,V) << endl;
    }
    return 0;
}
// } Driver Code Ends
