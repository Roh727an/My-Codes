#include <bits/stdc++.h>
using namespace std;
/*
Inverted Half Pyramid Pattern

               * * * *
               * * *
               * * 
               *
               * 
*/

int main()
{
    
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n-i;j++)
        {
            cout<<"* ";
        }
        cout<<endl;
    }

    return 0;
}
