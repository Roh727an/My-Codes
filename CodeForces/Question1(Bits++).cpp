#include <bits/stdc++.h>
using namespace std;
/*
# Bits++
*/
int main()
{
    int n;
    cin >> n;
    int x = 0;
    for (int i = 0; i < n; i++)
    {
        string s;
        cin >> s;

        // ++X
        if (s == "++X")
        {
            ++x;
        }
        // X++
        else if (s == "X++")
        {
            x++;
        }
        // X--
        else if (s == "X--")
        {
            x--;
        }
        // --X
        else if (s == "--X")
        {
            --x;
        }
    }
    cout << x << endl;
    return 0;
}
