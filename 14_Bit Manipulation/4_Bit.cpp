// Update bit
// suppose we need to update bit at position i = 1 to 1

#include<bits/stdc++.h> 
using namespace std;

int updateBit(int n, int pos, int value){
    int mask = ~(1<<pos);
    n = n & mask;
    return (n | (value << pos));
}

int32_t main(){ 

     cout<<updateBit(5,1,1)<<endl;

return 0;
}