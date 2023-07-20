#include <bits/stdc++.h>
using namespace std;
class Disjoint{
    // Rank Array & Parent Array
    vector <int> rank,parent;
    public: 
    // Create Constructor to Initilize These Array
    Disjoint(int size)
    {
        // Initilize Rank of All Nodes as 0
        rank.resize(size+1,0);
        // Initilize Parent of All Nodes as itself
        parent.resize(size+1);
        for(int i=0;i<size;i++)
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
        // Compare their Rank
        // Conncent Smaller One To Larger one
        if(rank[pu] > rank[pv])
        {
            parent[pv]=pu;
        }
        else if(rank[pv] > rank[pu])
        {
            parent[pu]=pv;
        }
        // If Both Are same Rank then Connect To any Any & Update its Rank By 1
        else
        {
            parent[pu]=pv;
            rank[pu]++;
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
