#include <bits/stdc++.h>
using namespace std;
/*
Palindromic Pattern
//Rows 0 1 2 3 4 5 6 7 8   //Columns
  0            1
  1          2 1 2
  2        3 2 1 2 3
  3      4 3 2 1 2 3 4
  4    5 4 3 2 1 2 3 4 5
*/
int main()
{
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int cnt=i+1;
        for(int j=0;j<n-i-1;j++)
        {
            cout<<"  ";
        }
        for(int j=n-i;j<n;j++)
        {
            cout<<cnt--<<" ";
        }

        cnt=1;
        for(int j=0;j<i+1;j++)
        {
            cout<<cnt++<<" ";
        }
        cout<<endl;
    }

    return 0;
}