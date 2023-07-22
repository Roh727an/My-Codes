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
    //Function to sort an array using quick sort algorithm.
    void quickSort(int arr[], int low, int high)
    {
        // code here
        if(low<high)
        {
        // Take out the Partition Index
        int partition_index=partition(arr,low,high);
        // Left Recursiove Call
        quickSort(arr,low,partition_index-1);
        // Right Recursive Call
        quickSort(arr,partition_index+1,high);
        }
    }
    
    public:
    int partition (int arr[], int low, int high)
    {
    // Your code here
    //   Take First ELement as Pivot Element
    int pivot=arr[low];
    int i=low;
    int j=high;
    // Smaller on Left & Greater on Right
    while(i<j)
    {
        // Traverse i Till the First Greater Element is Found At Left
        while(arr[i]<=pivot && i<=high)
        i++;
         // Traverse j Till the First Smaller Element is Found At Right
        while(arr[j]>pivot && j>=low) 
        j--;
        // if i& j is not crossed we can swap
        if(i<j)
        swap(arr[i],arr[j]);
    }
    // if i & j is swapped the j is pointing at pivot's correct Position
    swap(arr[low],arr[j]);
    
    return j;
    }
};


//{ Driver Code Starts.
int main()
{
    int arr[1000],n,T,i;
    scanf("%d",&T);
    while(T--){
    scanf("%d",&n);
    for(i=0;i<n;i++)
      scanf("%d",&arr[i]);
      Solution ob;
    ob.quickSort(arr, 0, n-1);
    printArray(arr, n);
    }
    return 0;
}
// } Driver Code Ends
