/* Draw a zig zag pattern in Cpp
                            n = 9

                            here the row is constant
    *       *
  *   *   *   *
*       *       *

*/ 

#include<iostream> 
using namespace std;

int main(){ 

     int n; 

     cout<<"Enter a number "<<endl;

     cin>>n;
     
     for(int i = 1; i<=3; i++){ // the row is constant value is 3
            for(int j = 1; j <= n; j++){
                if(((i+j)% 4==0 )||(i == 2 && j%4==0)){
                    cout<<"* ";
                }
                    else{
                        cout<<"  ";
                        // _sleep(1000);
                    }
                
            }
            cout<<endl;
     }
 

return 0;
}