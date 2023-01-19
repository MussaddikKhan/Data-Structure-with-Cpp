// Print the prime number between a to b

#include <iostream>
using namespace std;

int main()
{

    int a, b;

    cout << "Enter the Value of A & B " << endl;

    cin >> a >> b;

    cout<<"the prime number between  "<<a<<"  to  "<<b<<endl;

    for (int num = a; num <= b; num++)
    {
        int i;
        for (i = 2; i <= b; i++)
        {
            if (num % i == 0)
            {
                break;
            }
        }
        if (i == num)
        {
            cout << num << endl;
        }
    }
    return 0;
}