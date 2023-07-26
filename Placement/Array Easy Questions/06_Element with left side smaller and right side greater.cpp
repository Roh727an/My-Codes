//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

int findElement(int arr[], int n);

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i;
        cin >> n;
        int a[n];
        for (i = 0; i < n; i++) cin >> a[i];
        cout << findElement(a, n) << endl;
    }
    return 0;
}

// } Driver Code Ends
int findElement(int arr[], int n) {
    // 1.Find LeftMax & RightMin
    int leftMax[n];
    int rightMin[n];
    // LeftMax Find ->Left to Right
    int lmax=arr[0];
    for(int i=0;i<n;i++)
    {
        leftMax[i]=lmax;
        // Update Lmax
        if(arr[i]>lmax)
        lmax=arr[i];
    }
    // RightMin Find ->Right to Left
    int rmin=arr[n-1];
    for(int i=n-1;i>=0;i--)
    {
        rightMin[i]=rmin;
        // Update Lmax
        if(arr[i]<rmin)
        rmin=arr[i];
    }
    // Check for Element
    for(int i=0;i<n;i++)
    {
        if(leftMax[i]<=arr[i] && arr[i]<=rightMin[i] && i>0 && i<n-1)
        return arr[i];
    }
    return -1;
}
