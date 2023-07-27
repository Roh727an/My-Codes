#include <bits/stdc++.h>
using namespace std;
/*
    Rhombus Pattern
      0 1 2 3 4 5 6 7 8

   0          * * * * *
   1        * * * * *
   2      * * * * *
   3    * * * * *
   4  * * * * *
*/    
int main()
{
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n-i;j++)
        cout<<"  ";
        for(int k=0;k<n;k++)
        cout<<"* ";
        cout<<endl;
    }
    
    
    
    return 0;
}
