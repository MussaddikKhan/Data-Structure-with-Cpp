#include <bits/stdc++.h>
using namespace std;

int main()
{
    int num, remainder = 0, sum = 0, reverse = 0;
    int square = 0; 

    cout << "ENter a number " << endl;

    cin >> num;

    while (num != 0)
    {
        remainder = num % 10;
        reverse = reverse * 10 + remainder;
        square = (remainder * remainder);
        cout<<"The square of "<<remainder<<" is "<<square<<endl;
        sum  = sum + square;
        num = num / 10;
    }

    cout << "The reverse no is " << reverse<<endl;
    cout<<"The sum of each square is "<<sum<<endl;

    return 0;
}