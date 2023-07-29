//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends

int FirstOcc(int arr[], int n , int target){
    int low=0;
    int high=n-1;
    int ans=-1;
    int mid=(low+high)/2;
    while(low<=high)
    {
        // Equal -> Store index & Go to Left(as First Occ)
        if(arr[mid]==target)
        {
            ans=mid;
            high=mid-1;
        }
        // Lesser -> go to Right
        if(arr[mid]<target)
        {
            low=mid+1;
        }
        // Greater -> go to Left
        else
        high=mid-1;
        // Update Mid
        mid=(low+high)/2;
    }
    return ans;
}

int LastOcc(int arr[], int n , int target){
    int low=0;
    int high=n-1;
    int ans=-1;
    int mid=(low+high)/2;
    while(low<=high)
    {
        // Equal -> Store index & Go to Left(as First Occ)
        if(arr[mid]==target)
        {
            ans=mid;
            low=mid+1;
        }
        // Lesser -> go to Right
        if(arr[mid]>target)
        {
            high=mid-1;
        }
        // Greater -> go to Left
        else
         low=mid+1;
        // Update Mid
        mid=(low+high)/2;
    }
    return ans;
}
vector<int> find(int arr[], int n , int x )
{
    // Base Case
    if(n==1)
    {
        if(arr[0]==x)
        return {0,0};
        else
        return {-1,-1};
    }
    
    vector<int>ans;
    // 1.Find First Occurance
    ans.push_back(FirstOcc(arr,n,x));
    // 1.Find Last Occurance
    ans.push_back(LastOcc(arr,n,x));
    return ans;
}

//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,x;
        cin>>n>>x;
        int arr[n],i;
        for(i=0;i<n;i++)
        cin>>arr[i];
        vector<int> ans;
        ans=find(arr,n,x);
        cout<<ans[0]<<" "<<ans[1]<<endl;
    }
    return 0;
}



// } Driver Code Ends
