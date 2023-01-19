/*  n = 0101  
    supposed we need to set bit at positio i = 1 

    

*/

#include<bits/stdc++.h> 
using namespace std;

int setBit(int n, int pos){
    return (n|(1<<pos));
}

int32_t main(){ 

     cout<<setBit(5,1)<<endl;

return 0;
}
