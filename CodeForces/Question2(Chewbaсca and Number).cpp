#include <bits/stdc++.h>
using namespace std;
/* Chewbaсca and Number */

int main()
{
    string num;
    cin>>num;
    // Take Care of First Digit
    // Ascii value
    /*
    val Char
    48  0
    49  1
    50  2
    51  3 
    52  4
    53  5
    54  6
    55  7
    56  8
    57  9
    */

    int first_dig=num[0]-'0';
    if(first_dig==9)
    num[0]='9';
    else if(first_dig > 4)
    {
        num[0]=(9-first_dig)+'0';
    }
    // Remaining Digits
    for(int i=1;i<num.length();i++)
    {
        int digit=num[i]-'0';
        if(digit>4)
        num[i]=(9-digit)+'0';
    }
    cout<<num<<endl;
    return 0;
}
