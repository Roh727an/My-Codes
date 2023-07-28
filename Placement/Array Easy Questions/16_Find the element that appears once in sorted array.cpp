//{ Driver Code Starts
// Driver code

#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
  public:
    int findOnce(int arr[], int n)
    {
        //code here.
        // Base Case
        // If the array Contains Single Element-> will be our Ans
        if(n==1)
        return arr[0];
        // Check if The First Index is our Ans or Not
        if(arr[0]!=arr[1])
        return arr[0];
        // Check if The Last Index is our Ans or Not
        if(arr[n-1]!=arr[n-2])
        return arr[n-1];
        
        // We Shrink our Search space to second element to Second Last Element
        int low=1;
        int high=n-2;
        // Calculate Middle Index for Binary Search
        int mid=(low+high)/2;
        
        // Do a Binary Search
        while(low<=high)
        {
            // IF mid is Single Element
            if(arr[mid]!=arr[mid-1] && arr[mid]!=arr[mid+1])
            return arr[mid];
            
            // ***Main Logic Line is Written Below****
            // If the element is Right Side
            if((mid%2==1 && arr[mid]==arr[mid-1])||(mid%2==0 && arr[mid]==arr[mid+1]))
            low=mid+1;
            // If the element is Left Side
            else
            high=mid-1;
            // Update Middle Index
            mid=(low+high)/2;
        }
        return -1;
        
    }
};

//{ Driver Code Starts.

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        int A[n];
        for(int i = 0;i < n;i++)
        {
            cin>>A[i];
        }
        
        Solution ob;
        
        int res = ob.findOnce(A,n);
        cout << res << endl;
    }
    
    return 0;
}
// } Driver Code Ends
