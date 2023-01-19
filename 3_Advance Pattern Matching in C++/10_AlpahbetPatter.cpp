/*
    write a program to display following pattern 
    n = 9      
                     A         
                    A B        
                   A B C       
                  A B C D      
                 A B C D E     
                A B C D E F    
               A B C D E F G   
              A B C D E F G H  
             A B C D E F G H I 

*/

#include <bits/stdc++.h>
using namespace std; 

int main()
{
    int n = 9;
    int k;
    for(int i = 1; i<=n; i++){
        for(int j = 1; j<=n-i; j++){
            cout<<" ";
        }
        for(k = 1; k <= i;){
            cout<<(char)('A'+ k-1)<<" ";
            k++;
        }cout<<endl;
    }


     
return 0;
}