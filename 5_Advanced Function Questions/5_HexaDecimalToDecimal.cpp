#include <bits/stdc++.h>
using namespace std;

int binaryToDecimal(string n)
{

    int ans = 0;

    int temp = 1;

    int s = n.size();

    for (int i = s - 1; i >= 0; i--)
    {
        if (n[i] >= '0' && n[i] <= '9')
        {
            ans = ans + temp * (n[i] - '0');
        }
        else if (n[i] >= 'A' && n[i] <= 'F')
        {
            ans = ans + temp * (n[i] - 'A' + 10);
        }
        temp = temp * 16;
    }

    return ans;
}

int32_t main()
{

    string n;

    cin >> n;

    cout << binaryToDecimal(n) << endl;

    return 0;
}