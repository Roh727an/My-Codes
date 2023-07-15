class Solution {
    private:
    void DFS(int row,int col,vector<vector<int>>& image,vector<vector<int>>& ans,int iclr,int nclr,int rv[],int cv[])
    {
        // Mark as Colored
        ans[row][col]=nclr;
        int n=image.size();
        int m=image[0].size();
        // Check for Neighbours
        for(int i=0;i<4;i++)
        {
            int nrow=row+rv[i];
            int ncol=col+cv[i];
            // Check if in Range & Smae Initital Color & Uncolored
            if(nrow>=0 && nrow<n &&  ncol>=0 && ncol<m && image[nrow][ncol]==iclr && ans[nrow][ncol]!=nclr)
            {
                DFS(nrow,ncol,image,ans,iclr,nclr,rv,cv);
            }
        }
    }
public:
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int newColor) {
        // Code here 
        vector<vector<int>>ans=image;
        int initial_color=image[sr][sc];
        
        int row[]={-1,0,+1,0};
        int col[]={0,+1,0,-1};
        DFS(sr,sc,image,ans,initial_color,newColor,row,col);
        return ans;
    }
};
