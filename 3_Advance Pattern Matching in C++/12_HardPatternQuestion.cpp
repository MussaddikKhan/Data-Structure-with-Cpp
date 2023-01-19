/*
        write a program to display following pattern 
           * * * * * * *  
          * 1 2 3 4 5 6 * 
          * 2 3 4 5 6 7 * 
          * 3 4 5 6 7 8 * 
          * 4 5 6 7 8 9 * 
          * 5 6 7 8 9 1 * 
          * 6 7 8 9 1 2 * 
           * * * * * * *  
        
n = 8


*/


#include <bits/stdc++.h>
using namespace std;



int main()
{
    int n = 8;
    int a = 0;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if ((i == 1 && (i + j == 2)) || ((i == n) && (i + j == n+1)))   // for printing space condition 
            {
                cout << " ";
            }
            else if (((j == n + 1) && (i + j == n+1)))  // for printing a space condition 
            {
                cout << " ";
            }
            else if (i == 1 || i == n || j == 1 || j == n) //for printing star condition
            {
                cout << "*"<< " ";
            }
            else 
            {
                if(a < 9){  // then check the conditon for printing number 
                ++a;
                }
                else{
                    a = 1; 
                }
                cout << a << " ";
            }
        }
        a = i - 1;

        cout << endl;
    }
    return 0;
}