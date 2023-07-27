//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std; 

// } Driver Code Ends
class Solution{
    public:
    //Function to count the frequency of all elements from 1 to N in the array.
    void frequencyCount(vector<int>& arr,int N, int P)
    { 
        // 1.Create a Hashmap & Count Frequencies
        map<int,int>mp;
        for(int i=0;i<N;i++)
        mp[arr[i]]++;
        
        // 2.Make all Element as Zero
        for(int i=0;i<N;i++)
        arr[i]=0;
        
        // 3.Push all Elements Frequencies from Hasmap to its Correct Position
        for(int i=0;i<N;i++)
        {
            if(mp[i+1]!=0)
            arr[i]=mp[i+1];
        }
    }
};


//{ Driver Code Starts.

int main() 
{ 
	long long t;
	
	//testcases
	cin >> t;
	
	while(t--){
	    
	    int N, P;
	    //size of array
	    cin >> N; 
	    
	    vector<int> arr(N);
	    
	    //adding elements to the vector
	    for(int i = 0; i < N ; i++){
	        cin >> arr[i]; 
	    }
        cin >> P;
        Solution ob;
        //calling frequncycount() function
		ob.frequencyCount(arr, N, P); 
		
		//printing array elements
	    for (int i = 0; i < N ; i++) 
			cout << arr[i] << " ";
	    cout << endl;
	}	
	return 0; 
}





// } Driver Code Ends
