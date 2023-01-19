#include <bits/stdc++.h>
using namespace std; 

int power(int x, int n)
{
    if(n == 0){
        return 1;
    }

    int prevPower = power(x, n-1);  // n * (x ^ n - 1)

    return x * prevPower;
}

int main(){
    int a = 2, b = 3;
     cout<<power(a,b)<<endl;
return 0;
}