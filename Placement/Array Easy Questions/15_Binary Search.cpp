//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++

class Solution {
  public:
    int binarysearch(int arr[], int n, int k) {
        // code here
        // Low is Starting Index of Search Space
        int low=0;
        // High is Ending Index of Search Space
        int high=n-1;
        // Calculate Middle Index of Search Space
        int mid=(low+high)/2;
        
        while(low<=high)
        {
            // If The Mddle element of S.S is Equal to Target
            if(arr[mid]==k)
            return mid;
            // If The Mddle element of S.S is Greater than Target -> Smaller Section will be new Search Space
            else if(arr[mid]>k)
            high=mid-1;
            
            // If The Mddle element of S.S is Lesser than Target -> Greater Section will be new Search Space
            else
            low=mid+1;
            
            // Don't Forgot to Calculate New Middle Index of New Search Space
            mid=(low+high)/2;
        }
        // If the Element doesnot found Return -1
        return -1;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;

    while (t--) {
        int N;
        cin >> N;
        int arr[N];
        for (int i = 0; i < N; i++) cin >> arr[i];
        int key;
        cin >> key;
        Solution ob;
        int found = ob.binarysearch(arr, N, key);
        cout << found << endl;
    }
}

// } Driver Code Ends
