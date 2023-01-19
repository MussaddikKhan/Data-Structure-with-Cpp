// Sum of n number using recursion 

int sum(int n){
    if(n == 1 ){
        return 1;
    }
    return n + sum(n-1);
}

#include <bits/stdc++.h>
using namespace std; 

int main()
{
   int n = 5;
   cout<<"The sum of "<<n<<" is "<<sum(n)<<endl;  
return 0;
}