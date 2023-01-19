// Calcualte n raised to power of p 

#include<bits/stdc++.h> 
using namespace std;

int Power(int  n, int p){
    if(p == 0){
        return 1;
    }
    int prevPower  = Power(n,p-1);

    return n * prevPower;
}

int32_t main(){ 

     int n,p; 

     cin>>n>>p; 

     cout<<Power(n,p)<<endl;

return 0;
}