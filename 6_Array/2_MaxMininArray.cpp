
#include<bits/stdc++.h> 


// #include<climits>         when you get header file iostream so you shoudld get the climits for MAX and Min No 
using namespace std;

int32_t main(){ 

    int n; 

    cout<<"Enter the Size of Array"<<endl;

    cin>>n;

    int arr[n];

    for(int i = 0; i<n; i++){
        cin>>arr[i];
    } 

    int MaxNo = INT_MIN;
    int MinNo = INT_MAX;


    for(int i = 0; i<n; i++){
        
        MaxNo = max(arr[i],MaxNo);
        MinNo = min(arr[i],MinNo);

        // if(arr[i] > MaxNo){
        // MaxNo = arr[i];
        // }
        // if(arr[i]<MinNo) {
        //     MinNo = arr[i];
        // }    
    }
    cout<<MaxNo<<endl;
    cout<<MinNo<<endl;

return 0;
}