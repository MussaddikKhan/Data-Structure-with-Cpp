#include <iostream>
using namespace std;

int main()
{

    int num;

    cout << "Enter a number to check isPrime Or Not" << endl;

    cin >> num;

    int i;

    for (i = 2; i <= num; i++)
    {
        if (num % i == 0)
        {
            break;
        }
    }
    if (i == num)
    {

        cout << "The number is prime" << endl;
    }
    else
    {
        cout << "The number is not prime" << endl;
    }
    return 0;
}