#include <iostream>
#include <math.h>
using namespace std;

int main()
{

    int n;
    cout << "Enter the number to check Prime Or Not" << endl;

    cin >> n;

    bool isPrime = 0;

    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            isPrime = 1;
            break;
        }
    }
    if (isPrime == 0)
    {
        cout << "the number is prime" << endl;
    }
    else
    {
        cout << "the number is not prime " << endl;
    }

    return 0;
}
