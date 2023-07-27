#include <bits/stdc++.h>
using namespace std;
/*
     0 1 2 3 4 5 6
 0       *       * 
 1     *   *   *   
 2   *       *         

*/
int main()
{
    int n;
    cin>>n;

    for(int i=1;i<=3;i++)
    {
        for(int j=1;j<=n;j++)
        {
            if(((i+j)%4==0) ||(j%4==0 && i==2) )
            cout<<"* ";
            else
            cout<<"  ";
        }
        cout<<endl;
    }
    
    return 0;
}