#include <bits/stdc++.h>
using namespace std;

bool Check(int x, int y, int z)
{

    int a = max(x, max(y, z));

    int b, c;

    if (a == x)
    {
        b = y;
        c = z;
    }
    else if (a == y)
    {
        b = x;
        c = z;
    }
    else
    {
        b = x;
        c = y;
    }

    if (a*a == b * b + c * c)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int32_t main()
{

    int x, y, z;

    cin >> x >> y >> z;

    if (Check(x, y, z))
    {
        cout << "It is a pythagorean Triplet" << endl;
    }
    else
    {
        cout << "Not an Pythagorean Triplet " << endl;
    }
    return 0;
}