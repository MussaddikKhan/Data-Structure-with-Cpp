// Check the number is armstrong or not

#include <iostream>
#include <math.h>
using namespace std;

int main()
{

    int n;

    cout << "Enter the number to check is armstrong or not" << endl;
    cin >> n;

    int OrignalNo = n;
    int armstrong = 0;

    while (n > 0)
    {
        int lastDigit = n % 10;
        armstrong = armstrong + pow(lastDigit, 3);
        n = n / 10;
    }

    if (OrignalNo = armstrong)
    {
        cout << "the number is Armstrong" << endl;
    }
    else
    {
        cout << "The number is not Armstrong" << endl;
    }
    return 0;
}