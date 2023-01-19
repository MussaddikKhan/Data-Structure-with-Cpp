#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n = 14;
    int count;
    for (int i = 1; i <= n; i++)
    {
        count = 0;
        for (int j = 1; j <= n; j++)
        {
            if (i % j == 0)
            {
                count++;
            }
        }
        if (count == 2)
        {
            cout << i << " ";
        }
    }
    return 0;
}