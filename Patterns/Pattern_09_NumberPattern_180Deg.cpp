#include <bits/stdc++.h>
using namespace std;
/*
Number Pattern 
(n=4)
          1
        1 2
      1 2 3
    1 2 3 4

*/   
int main()
{
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int cnt=1;
        for(int j=0;j<n;j++)
        {
            if(j<n-i-1)
            cout<<"  ";
            else
            cout<<cnt++<<" ";
        }
        cout<<endl;
    }

    
    return 0;
}
