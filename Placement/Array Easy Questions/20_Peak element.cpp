//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
/* The function should return the index of any
   peak element present in the array */

// arr: input array
// n: size of array
class Solution
{
    public:
    int peakElement(int nums[], int n)
    {
       // Your code here
               int ans=-1;
        int low=0;
        int high=n-1;
        int mid=(low+high)/2;
        /*
               >   >      
        1 2 3 4 |8| 2 4 5
        Normally-> arr[mid]<arr[mid+1]
        But for Peak index-> arr[mid]>arr[mid+1]=> mid can be our Peak Index
        */
        while(low<high)
        {

            if(nums[mid]>nums[mid+1])
            {
                // Left Side include Mid
                high=mid;
            }
            else
            {
                // Right Side exclude mid
                low=mid+1;
            }
            // Update Mid
            mid=(low+high)/2;
        }
        return mid;
    }
};

//{ Driver Code Starts.

int main() {
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int a[n], tmp[n];
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
			tmp[i] = a[i];
		}
		bool f=0;
		Solution ob;
		
		int A = ob. peakElement(tmp,n);
		
		if(A<0 and A>=n)
		    cout<<0<<endl;
		else
		{
    		if(n==1 and A==0)
    		    f=1;
    		else if(A==0 and a[0]>=a[1])
    		    f=1;
    		else if(A==n-1 and a[n-1]>=a[n-2])
    		    f=1;
    		else if(a[A]>=a[A+1] and a[A]>= a[A-1])
    		    f=1;
    		else
    		    f=0;
    		cout<<f<<endl;
		}
		
	}

	return 0;
}
// } Driver Code Ends
