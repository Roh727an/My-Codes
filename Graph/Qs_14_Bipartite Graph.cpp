class Solution {
    private:
    bool DFS(int clr,int node,vector<int>adj[],int *col)
    {
        col[node]=clr;
        for(auto it:adj[node])
        {
            if(col[it]==-1)
            {
                if(DFS(!clr,it,adj,col)==false)
                return false;
            }
            else if(col[it]==clr)
            return false;
        }
        return true;
    }
public:
	bool isBipartite(int V, vector<int>adj[]){
	    // Code here
	    int col[V];
	    for(int i=0;i<V;i++)
	    col[i]=-1;
	    for(int i=0;i<V;i++)
	    {
	       // Uncolored
	        if(col[i]==-1)
	        {
	            if(DFS(0,i,adj,col)==false)
	            return false;
	        }
	    }
	    return true;
	}

};
