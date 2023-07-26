//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution{
  public:
    int minDist(int a[], int n, int x, int y) {
        // code here
        int i=-1; //Points at X
        int j=-1; //Points at Y
        int ans=1e7; //Calculate Diference
        for(int k=0;k<n;k++)
        {
            if(a[k]==x)
            i=k;
            else if(a[k]==y)
            j=k;
            
            // Check for Minimum Difference
            if(i!=-1 && j!=-1)
            ans=min(ans,abs(i-j));
        }
        return ans==1e7? -1 : ans;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++) cin >> a[i];
        int x, y;
        cin >> x >> y;
        Solution obj;
        cout << obj.minDist(a, n, x, y) << endl;
    }
    return 0;
}

// } Driver Code Ends
