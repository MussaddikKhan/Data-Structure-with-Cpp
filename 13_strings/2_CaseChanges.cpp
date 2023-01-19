// Lower case to upper case 

#include<bits/stdc++.h> 
using namespace std;

int32_t main(){ 

    string str = "adsfghijklm";

    // Convert into uppercase

    for(int i = 0; i<str.size();i++){
        if(str[i] >= 'a' &&  str[i] <='z'){
                str[i] -= 32; 
        }
    } 
    cout<<str<<endl;

for(int i = 0; i<str.size();i++){
        if(str[i] >= 'A' &&  str[i] <='Z'){
                str[i] += 32; 
        }
    } 
    cout<<str<<endl;


return 0;
}