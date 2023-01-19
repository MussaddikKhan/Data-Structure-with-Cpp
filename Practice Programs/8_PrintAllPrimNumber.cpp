// Print all prime number between 2 give numbers

#include <bits/stdc++.h>
#include <math.h>
using namespace std;
int main()
{

    int count, i, j;
    int n = 20;
    for (i = 1; i <= n; i++)
    {
        count = 0;
        for (j = 1; j <= n; j++)
        {
            if (i % j == 0)
            {
                count++;
            }
        }
        if (count == 2)
        {

            cout << " " << i;
        }
    }

    return 0;
}