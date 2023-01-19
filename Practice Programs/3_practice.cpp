
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,sum=0;
    
    for(i=100;i<=200;i++)
    {
        if(i%9==0)
        {
            cout<<" "<<i<<endl;
            sum=sum+i;
        }
    }
    cout<<"sum : "<<sum;
    return 0;
}