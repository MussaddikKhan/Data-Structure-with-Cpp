#include <bits/stdc++.h>
using namespace std; 

int main()
{
     int Num,Pow;

    cout<<"Enter the number "<<endl;
    cin>>Num;

    cout<<"Enter the Power of that number"<<endl;
    cin>>Pow;

      int ans = 1;
    while(Pow != 0){
        ans = ans * Num;
        Pow--;
    }

    cout<<ans<<endl;
    

return 0;
}