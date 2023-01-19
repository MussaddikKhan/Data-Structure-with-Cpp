#include <bits/stdc++.h>
using namespace std;

int main()
{
    int num = 5;
    int rem = 0;
    int sum = 0;
    for (int i = 1; i <= num; i++)
    {
        rem = (rem * 10) + 1;
        cout << rem;
        if (i == num)
        {
        }
        else
        {
            cout << "+";
        }
        sum = sum + rem;
    }
    cout << "\n" << sum;

    return 0;
}