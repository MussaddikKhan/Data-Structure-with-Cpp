

/* Create a Rectangle with the help of '*' Pattern

    * * * *
    * * * *                 Row and Coloum
    * * * *
    * * * *
    * * * *
*/

#include <iostream>
using namespace std;

int main()
{

    int row, col;

    cout << "Enter a Row and Coulomns " << endl;

    cin >> row >> col;

    for (int i = 1; i <= row; i++)
    {
        for (int j = 1; j <= col; j++)
        {
            cout << "*"  << " ";
        }
        cout << endl;
    }

    return 0;
}
