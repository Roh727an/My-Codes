#include <bits/stdc++.h>
using namespace std;
/*
    ButterFly Pattern
     0 1 2 3 4 5 6 7
   0 *             * 
   1 * *         * * 
   2 * * *     * * * 
   3 * * * * * * * * 
   4 * * * * * * * * 
   5 * * *     * * * 
   6 * *         * * 
   7 *             *      

*/
int main()
{
    int n;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=i;j++)
        cout<<"* ";

        for(int j=1;j<=2*n-2*i;j++)
        cout<<"  ";

        for(int j=1;j<=i;j++)
        cout<<"* ";
        cout<<endl;
    }
    
    for(int i=n;i>=1;i--)
    {
        for(int j=1;j<=i;j++)
        cout<<"* ";

        for(int j=1;j<=2*n-2*i;j++)
        cout<<"  ";

        for(int j=1;j<=i;j++)
        cout<<"* ";
        cout<<endl;
    }
    return 0;
}