// bitwise operator AND, OR , XOR, << ,>> 

#include<bits/stdc++.h> 
using namespace std;

int getBit(int n , int pos){
    return ((n & (1<<pos))!= 0);

}

int32_t main(){ 

     cout<<getBit(5,2)<<endl; // 0100 pos second have 1 

return 0;
}