#include <bits/stdc++.h>
using namespace std;
/*
    Floyd's Triangle
    n=4
     1
     2 3
     4 5 6
     7 8 9 10


*/   
int main()
{
    int n;
    cin>>n;
    int cnt=1;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<=i;j++)
        cout<<cnt++<<" ";

        cout<<endl;
    }

    return 0;
}