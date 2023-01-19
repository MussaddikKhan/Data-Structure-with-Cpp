#include <iostream>
using namespace std;

int fact(int n)
{
    int factorial = 1;
    for (int i = 2; i <= n; i++)
    {
        factorial = factorial * i;
    }
    return factorial;
}

int main()
{

    int n;
    int factorial;
    cout << "Enter the number to find factorial " << endl;

    cin >> n;

    factorial = fact(n);

    cout << factorial << endl;

    return 0;
}