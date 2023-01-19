/*
    Write a program to print following Pattern 

    5 4 3 2 1
    5 4 3 2
    5 4 3
    5 4
    5

    n = 5;

*/

#include <bits/stdc++.h>
using namespace std; 

int main()
{
     int n = 5; 
    
    for(int i = 1; i<= n; i++){
        for(int j = n; j>= i; j--){
            cout<<j<<" ";
        }cout<<endl;
    }
return 0;
}