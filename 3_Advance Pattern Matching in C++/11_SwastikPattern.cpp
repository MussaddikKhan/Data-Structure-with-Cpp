/*
write a program to display following pattern
n = 9

            +
            +
            +
            +
    + + + + + + + + +
            +
            +
            +
            +


*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n = 9;
    int a = 1;
    int b = n;

    int mid = (a + b) / 2;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (i == mid || j == mid)
            {
                cout << " + ";
            }
            else
            {
                cout << "   ";
            }
        }
        cout << endl;
    }

    return 0;
}