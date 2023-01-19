#include <iostream>
using namespace std;

int main()
{

    int Num;

    cout << "Enter a number to check odd or even \n";
    cin >> Num;

    if (Num % 2 == 0)
    {
        cout << "the number is Even" << endl;
    }
    else
    {
        cout << "The number is odd" << endl;
    }

    return 0;
}