//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function template for C++

class Solution {
  public:
    // Function to return the count of the number of elements in
    // the intersection of two arrays.
    // Frequency counting of Smaller Array Function
    unordered_map<int,int> frequencySmaller(int arr[],int n)
    {
        unordered_map<int,int>mp;
        for(int i=0;i<n;i++)
        {
            mp[arr[i]]++;
        }
        return mp;
    }
    // Common Element Counting Function
    int count(unordered_map<int,int>mp,int arr[],int n)
    {
        int cnt=0;
        for(int i=0;i<n;i++)
        {
            if(mp[arr[i]]>=1)
            {
                cnt++;
                // To Make Sure if this element is comes again Not to Consider as another Common ELement
                mp[arr[i]]=0;
            }
            
        }
        return cnt;
    }
    int NumberofElementsInIntersection(int a[], int b[], int n, int m) {
        // Your code goes 
        // 1.Count Smaller Array's Frequencies 
        // 2.Count Common element in Greater Array according to Hash Map(Frequencies)
        if(n>m)
        {
            unordered_map<int,int>mp=frequencySmaller(b,m);
            return count(mp,a,n);
        }
        else
        {
            unordered_map<int,int>mp=frequencySmaller(a,n);
            return count(mp,b,m); 
        }
        return 0;
       
        
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        int a[n], b[m];
        for (int i = 0; i < n; i++) cin >> a[i];

        for (int i = 0; i < m; i++) cin >> b[i];
        Solution ob;
        cout << ob.NumberofElementsInIntersection(a, b, n, m) << endl;
    }
    return 0;
}
// } Driver Code Ends
