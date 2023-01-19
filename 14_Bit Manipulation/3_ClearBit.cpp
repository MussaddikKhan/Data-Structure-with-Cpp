// Suppose we need to clear bit at position i = 2

#include<bits/stdc++.h> 
using namespace std;

int clearBit(int n, int pos){
    int mask = ~(1<<pos);
    return (n & mask);
}
int32_t main(){ 

     cout<<clearBit(5,2)<<endl;

return 0;
}