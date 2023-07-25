//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;



// } Driver Code Ends
class Solution{
    public:
    /*You are required to complete this method*/
     int max_path_sum(int ar1[], int ar2[], int m, int n)
    {
    int i = 0, j = 0;
     // Sums are Calculating Before Common Element Sum of Respected Arrays
    int result = 0, sum1 = 0, sum2 = 0;
    // Traverse till any one Ends
    while (i < m && j < n) {
        
        if (ar1[i] < ar2[j]) //i++
            sum1 += ar1[i++];
        else if (ar1[i] > ar2[j]) //j++
            sum2 += ar2[j++];
        // we reached a common point
        else 
        {
            // Take the maximum of two sums and add to
           
            result += max(sum1, sum2) + ar1[i];
            //Reset Sums
            // Now Sums are Calculating After Common Element Sum of Respected Arrays
            sum1 = 0;
            sum2 = 0;
            // update i and j to move to next element of
            i++;
            j++;
        }
    }
  
    // Add remaining elements of ar1[]
    while (i < m)
        sum1 += ar1[i++];
  
    // Add remaining elements of ar2[]
    while (j < n)
        sum2 += ar2[j++];
  
    // Add maximum of two sums of remaining elements
    result += max(sum1, sum2);
  
    return result;
    }
};

//{ Driver Code Starts.

int main()
{
    int T;
    cin>>T;

    while(T--)
    {
        int N,M;
        cin>>N>>M;
        fflush(stdin);
        int a[N],b[M];
        for(int i=0;i<N;i++)
            cin>>a[i];
        for(int i=0;i<M;i++)
            cin>>b[i];
        Solution obj;
        int result = obj.max_path_sum(a,b,N,M);
        cout<<result<<endl;
    }
}


// } Driver Code Ends
