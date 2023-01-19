#include <iostream>
using namespace std;

int main()
{

    float n1, n2;

    cout << "Enter the value of N1 and N2" << endl;

    cin >> n1 >> n2;

    char Op;
    cout << "Enter the Operation" << endl;

    cin >> Op;

    switch (Op)
    {
    case '+':
        cout << n1 + n2 << endl;
        break;
    case '-':
        cout << n1 - n2 << endl;
        break;
    case '*':
        cout << n1 * n2 << endl;
        break;
    case '/':
        cout << n1 / n2 << endl;
        break;
    default:
        cout << "Please Enter a Valid Keyword :-" << endl;
        break;
    }

    return 0;
}