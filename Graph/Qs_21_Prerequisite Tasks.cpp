class Solution {
public:
	bool isPossible(int n,int P, vector<pair<int, int> >& prerequisites) {
	    // Code here
	   vector<int>adj[n];
        int indegree[n]={0};
        for(auto it: prerequisites)
        {
            adj[it.second].push_back(it.first);
        }
        for(int i=0;i<n;i++)
        {
            for(auto it:adj[i])
            {
                indegree[it]++;
            }
        }
        queue<int>q;
        for(int i=0;i<n;i++)
        {
            if(indegree[i]==0)
            q.push(i);
        }
        vector<int> ans;
        while(!q.empty())
        {
            int node=q.front();
            q.pop();
            ans.push_back(node);
            for(auto it:adj[node])
            {
                indegree[it]--;
                if(indegree[it]==0)
                q.push(it);
            }
        }
        return ans.size()==n;
	}
};
