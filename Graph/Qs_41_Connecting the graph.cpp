//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++
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
    int Solve(int n, vector<vector<int>>& edge) {
        // code here
        Disjoint ds(n);
        int extra=0;
        // Count The Extra Edges
        for(auto it:edge)
        {
            int u=it[0];
            int v=it[1];
            // IF they are already connected thn there is an Extra Node
            if(ds.FindParent(u)==ds.FindParent(v))
            extra++;
            else
            ds.Union(u,v);
        }
        int comp=0;
        // Count The number of Components
        for(int i=0;i<n;i++)
        {
            if(ds.FindParent(i)==i)
            comp++;
        }
        if(extra>=comp-1)
        return comp-1;
        return -1;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        vector<vector<int>> adj;

        for (int i = 0; i < m; ++i) {
            vector<int> temp;
            for (int j = 0; j < 2; ++j) {
                int x;
                cin >> x;
                temp.push_back(x);
            }
            adj.push_back(temp);
        }

        Solution Obj;
        cout << Obj.Solve(n, adj) << "\n";
    }
    return 0;
}
// } Driver Code Ends
