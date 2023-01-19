// find the factorial of give number 

#include<bits/stdc++.h> 
using namespace std;

int factorial(int n){
    if(n == 0){
        return 1;
    }

    int fact = factorial(n -1);
    return n * fact;
}

int32_t main(){ 

     int n; 
     cin>>n; 
     cout<<factorial(n)<<endl;

return 0;
}