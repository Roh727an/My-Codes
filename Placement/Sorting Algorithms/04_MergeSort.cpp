//{ Driver Code Starts
#include <stdio.h>
#include <bits/stdc++.h>
using namespace std;



/* Function to print an array */
void printArray(int arr[], int size)
{
    int i;
    for (i=0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");
}


// } Driver Code Ends
class Solution
{
    public:
    void merge(int arr[], int l, int m, int r)
    {
        // Your code here
        //  Create a Temp Array
        vector<int>temp;
        // array 1 = arr[l] to arr[m-1]
        // array2 = arr[m] to arr[r]
        int i=l;
        int j=m+1;
        while(i<=m && j<=r)
        {
            if(arr[i]<arr[j])
            {
                temp.push_back(arr[i]);
                i++;
            }
            else
            {
            temp.push_back(arr[j]);
            j++;  
            }
            
        }
        while(i<=m)
        {
            temp.push_back(arr[i]);
            i++;
        }
        while(j<=r)
        {
            temp.push_back(arr[j]);
            j++;
        }
        for(i=l;i<=r;i++)
        arr[i]=temp[i-l];
        
    }
    public:
    void mergeSort(int arr[], int l, int r)
    {
        //Base Case
        if(l>=r) return ;
        // Findout Mid(The Partition Point)
        int m=(l+r)/2;
        // Call Fuction To Recursively Divide The Array (For the Left Part)
        mergeSort(arr,l,m);
        // Call Fuction To Recursively Divide The Array (For the Right Part)
        mergeSort(arr,m+1,r);
        // After Dividing Merge them
        merge(arr,l,m,r);

    }
};

//{ Driver Code Starts.


int main()
{
    int n,T,i;

    scanf("%d",&T);

    while(T--){
    
    scanf("%d",&n);
    int arr[n+1];
    for(i=0;i<n;i++)
      scanf("%d",&arr[i]);

    Solution ob;
    ob.mergeSort(arr, 0, n-1);
    printArray(arr, n);
    }
    return 0;
}
// } Driver Code Ends43a
