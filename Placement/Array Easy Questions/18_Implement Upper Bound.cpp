int upperBound(vector<int> &arr, int x, int n){
	// Write your code here.
	/*
	// C++ STL
	// Create Iterator
	vector<int>::iterator ub;
	// Use upper_bound(Starting Idx,Ending Idx,Value)
	ub=upper_bound(arr.begin(),arr.end(),x);
	return ub-arr.begin();
	*/
	int low=0;
	int high=n-1;
	int ans=n;
	int mid=(low+high)/2;
	while(low<=high)
	{
		if(arr[mid]>x)
		{
			ans=mid;
			high=mid-1;
		}
		else
		low=mid+1;

		mid=(low+high)/2;
	}
	return ans;
}
