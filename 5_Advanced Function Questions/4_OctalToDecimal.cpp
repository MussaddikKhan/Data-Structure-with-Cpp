#include<bits/stdc++.h> 
using namespace std;

int binaryToDecimal(int n){

    int ans = 0; 

    int temp = 1; 

    while(n > 0){
        int lastDigit = n % 10; 
         ans = ans + temp * lastDigit;

         temp = temp * 8; 

         n = n / 10;
    }
    return ans; 

}

int32_t main(){ 

    int n; 

    cin>>n; 

    cout<<binaryToDecimal(n)<<endl; 

return 0;
}