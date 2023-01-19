#include <bits/stdc++.h>
using namespace std; 

int main()
{
    //  int num1 = 100; 
    //  int num2 = 200; 
     int sum = 0; 

     for(int i = 100 ; i<= 200; i++){
        if(i % 9 == 0 ){
            cout<<i<<" "; 
            sum = sum + i; 
        }
     }
     cout<< " \n The sum of total number  divisible by 9 is "<<sum; 
return 0;
}