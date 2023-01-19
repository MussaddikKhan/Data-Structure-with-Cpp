#include<bits/stdc++.h> 
using namespace std;

int lineaSearch(int arr[],int n,int key){
    for(int i = 0; i<n; i++){
        if(arr[i] == key){
            return i; 
        }
    }
    return -1;
}

int32_t main(){ 

    int n;

    cout<<"Enter the Size of Arrry "<<endl;

    cin>>n;

    int arr[n];

    cout<<"Enter the element in array"<<endl;

    for(int i = 0; i<n; i++){
        cin>>arr[i];
    }

    int key;
    cout<<"Enter a key "<<endl;

    cin>>key; 
    
    cout<<"Key found in index"<<endl;
cout<<lineaSearch(arr,n,key)<<endl;
    


return 0;
}