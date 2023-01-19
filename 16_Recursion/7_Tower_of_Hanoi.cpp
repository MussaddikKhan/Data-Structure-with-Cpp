// Tower of Hanoi Problem using recursion 

#include <bits/stdc++.h>
using namespace std;

void TOH(char A, char B, char C, int n)
{
    if (n == 1)  // The last disk is left or only one disk in a tower then move(A-> B)
    {
        cout << "move disk " << n << " from " << A << " to " << B << " using " << C << endl;
    }
    else  // else the disk is more than one 
    {
        TOH(A, C, B, n - 1);  // move all this (n - 1) A to C using B
        cout << "move disk " << n << " from " << A << " to " << B << " using " << C << endl; //(A -> B )
        TOH(C, B, A, n - 1);  // move all this (n - 1) C to B using A 
    }
}

int main()
{
    int n = 3;

    TOH('A', 'B', 'C', n);
    return 0;
}