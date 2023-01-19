#include <bits/stdc++.h>
using namespace std;

int decimalToBinary(int n)
{
    int ans = 0;

    int x = 1;
    

    while (x <= n)

        x = x * 8;
        x = x / 8;


    while (x > 0)
    {
        int lastDigit = n / x;
        n = n - lastDigit * x;

        x = x / 8;

        ans = ans * 10 + lastDigit;
    }
    return ans;
}

int32_t main()
{

    int n;

    cin >> n;

    cout << decimalToBinary(n) << endl;

    return 0;
}