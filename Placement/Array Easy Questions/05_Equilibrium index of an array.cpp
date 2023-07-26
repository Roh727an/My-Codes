//{ Driver Code Starts
#include <iostream>
using namespace std;
#include <stdio.h>
 
int findEquilibrium(int [], int );
 
int main() {
	int T;
	cin>>T;
	while(T--)
	{
		int n;
		cin>>n;
		int a[n];
		for(int i=0;i<n;i++)
		cin>>a[i];
		cout<<findEquilibrium (a,n)<<endl;
	}
	// your code goes here
	return 0;
}
// } Driver Code Ends


/* You are required to complete this method*/
int findEquilibrium(int A[], int n)
{
  //Calculate Total Sum
  int sum=0;
  for(int i=0;i<n;i++)
  {
      sum+=A[i];
  }
//   initilize BeforeSum(bs) as 0 & Aftersum(as)=TotalSum
  int bs=0;
  int as=sum;
  for(int i=0;i<n;i++)
  {
    //Calculate After Sum
    as=as-A[i];
    //Calculate Before Sum
    bs=sum-as-A[i];
    // cout<<as<<" "<<bs<<endl;
    if(as==bs)
    return i;
  }
  return -1;
}
