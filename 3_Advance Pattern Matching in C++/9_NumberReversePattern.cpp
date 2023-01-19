/*
    Write a program to print following Pattern

    5 4 3 2 1
    4 3 2 1
    3 2 1
    2 1
    1

    n = 5;
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n = 5;
    int a = n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = n; j >= i; j--)
        {
            if (a > 0)
            {
                cout << a << " ";
                a--;
            }
        }
        a = n - i;
        cout << endl;
    }
    return 0;
}