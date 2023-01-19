#include <bits/stdc++.h>
using namespace std; 

int main()
{
    int Num,sum = 0, remainder; 
     cout<<"Enter a number "<<endl;

     cin>>Num;

     while(Num != 0){
        remainder = Num % 10;
        Num = Num / 10; 
        sum = sum + remainder;
     }
     cout<<sum<<endl;
    
return 0;
}