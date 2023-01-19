/*
    write a program to display  following pattern 

  * * * * * * * * * 
    * * * * * * *   
      * * * * *     
        * * *       
          *         
        * * *       
      * * * * *     
    * * * * * * *   
  * * * * * * * * * 

*/


#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n = 9;
    int mid = (1 + n) / 2;
    int num = 2;    
        for(int i =1 ;i<=n; i++){
            if(i <= mid){
             for(int j = 1; j<=i;j++){
                cout<<"  ";
             }
            for(int k = i -1; k <=n-i; k++){
                 cout<<"*"<<" ";
            }cout<<endl;
         }else{
            for(int j = 1; j<= n-i +1;j++){
                cout<<"  ";
             }
            for(int k = 1; k <=2*num-1; k++){
                 cout<<"*"<<" ";
            }cout<<endl;
                 num++;
         }
          
        }
    
    return 0;
}