void pushZerosToEnd(int arr[], int n) {
	    // code here
	    int i=0;
	   for(int j=0;j<n;j++)
	   {
	       //Find Out FIrst Non Negative & swap it with ith element& incremenet i
	       if(arr[j]!=0)
	       swap(arr[j],arr[i++]);
	   }
	}
