// write a program to find a unique number in an array where all numbers  except one are present twice
// {2,4,6,3,4,6,2}   unique is 3

#include<bits/stdc++.h> 
using namespace std;

int unique(int arr[],int n){
    int xorsum = 0; 
    for(int i =0; i<n; i++){
        xorsum = xorsum ^ arr[i];
    }
    return xorsum; 
}

int32_t main(){ 

     int arr[] = {1,2,3,4,1,2,3};

     cout<<unique(arr,7)<<endl;

return 0;
}