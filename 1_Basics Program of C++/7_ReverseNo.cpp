#include <iostream>
using namespace std;

int main()
{

    int n;

    cout << "Enter a number " << endl;
    cin >> n;
    int reverse = 0;

    while (n > 0)
    {
        int LastDigit = n % 10;

        reverse = reverse * 10 + LastDigit;
        n = n / 10;
    }
    cout<<reverse<<endl;

    return 0;
}