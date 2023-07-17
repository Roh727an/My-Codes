class Solution
{
	public:
	//Function to return list containing vertices in Topological order. 
	vector<int> topoSort(int V, vector<int> adj[]) 
	{
	    // Create Indegree Array
	    int indegree[V]={0};
	   // Calculate Indegrees
	    for(int i=0;i<V;i++)
	    {
	        for(auto it:adj[i]){
	        indegree[it]++;
	    }
	    }
	   // Create a Queue as Required in BFS
	    queue<int>q;
	    vector<int>topo;
	   // Push the Node having Indegree 0 into Queue
	    for (int i=0;i<V;i++)
	    {
	        if(indegree[i]==0)
	        q.push(i);
	    }
	   // Do BFS
	   while(!q.empty())
	   {
	       int node=q.front();
	       q.pop();
	       topo.push_back(node);
	       for(auto it:adj[node])
	       {
	           indegree[it]--;
	           if(indegree[it]==0)
	           q.push(it);
	       }
	   }
	   return topo;
	}
};
