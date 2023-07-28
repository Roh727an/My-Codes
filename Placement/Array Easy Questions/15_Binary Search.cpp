//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++

class Solution {
  public:
    // Recursive Binary Search
    int Rec_binarysearch(int low,int high,int arr[],int k){
        // Base Case
        if(low>high)
        return -1;
        
        // Calculate Mid
        int mid=(low+high)/2;
        // If Equal
        if(arr[mid]==k)
        return mid;
        // IF Greater
        if(arr[mid]>k)
        return Rec_binarysearch(low,mid-1,arr,k);
        else
        return Rec_binarysearch(mid+1,high,arr,k);
        
    }
    int binarysearch(int arr[], int n, int k) {
        // Recursive Solution
        return Rec_binarysearch(0,n-1,arr,k);
        
        // Iterative Solution
        // Low is Starting Index of the Search Space
        int low=0;
        // High is the Ending Index of the Search Space
        int high=n-1;
        // Calculate the Middle Index of the Search Space
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
            
            // Don't Forgot to Calculate the New Middle Index of the New Search Space
            mid=(low+high)/2;
        }
        // If the Element doesn't found Return -1
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
