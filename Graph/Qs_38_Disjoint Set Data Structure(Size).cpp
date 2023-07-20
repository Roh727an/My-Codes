#include <bits/stdc++.h>
using namespace std;
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

int main()
{
    Disjoint ds(7);
    ds.Union(1,2);
    ds.Union(2,3);
    ds.Union(4,5);
    ds.Union(6,7);
    ds.Union(5,6);
    if(ds.FindParent(5)==ds.FindParent(1))
    cout<<"Same"<<endl;
    else
    cout<<"Not Same"<<endl;
    ds.Union(3,7);
    if(ds.FindParent(5)==ds.FindParent(1))
    cout<<"Same"<<endl;
    else
    cout<<"Not Same"<<endl;
    return 0;
}
