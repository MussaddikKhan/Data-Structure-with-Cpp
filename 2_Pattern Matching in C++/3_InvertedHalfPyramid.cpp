/* Draw a Inverted half Pyramid
     n = 5

* * * * *
* * * *
* * *
* *
*
     */

#include <iostream>
using namespace std;

int main()
{

    int n;

    cout << "Enter the value of to print star in inverted half Pyramid :-" << endl;

    cin >> n;

    for (int i = n; i >= 1; i--)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << "* ";
                 
        }
        cout<<endl;
    }

    return 0;
}