#include <iostream>
using namespace std;

void fib(int n)
{
    int t1 = 0;
    int t2 = 1;

    int NewNum;

    for (int i = 1; i <= n; i++)
    {
        cout << t1 << endl;
        NewNum = t1 + t2;

        t1 = t2;
        t2 = NewNum;
    }
}

int main()
{

    int n;

    cout << "Enter the number to print fibonacci Sequence " << endl;
    cin >> n;

    fib(n);

    return 0;
}