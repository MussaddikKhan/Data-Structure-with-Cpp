// Print Array element using recursion 

#include <bits/stdc++.h>
using namespace std; 

void PrintArray(int  *A, int size){
    if(size == 0){
        cout<<A<<" ";
    }
    cout<<A << PrintArray(A , size - 1);
}

int main()
{
    int A[] = {1, 2, 3, 4, 5, 6}; 
    int size  = 6;
    cout<<sizeof(A[]);
    // cout<<PrintArray(A, size)<<" ";
return 0;
}