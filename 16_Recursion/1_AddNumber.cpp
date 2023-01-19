// Add all number till n

#include <bits/stdc++.h>
using namespace std;

int Add(int n)
{
    if (n == 0)
    {
        return 0;
    }
    int prevSum = Add(n - 1);

    return n + prevSum;
}

int32_t main()
{
    int n; 
    cin>>n;
    cout<<Add(n)<<endl;
    return 0;
}