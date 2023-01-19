#include <stdio.h> 

int main()
{
     int arr[] = {1,2,3,4};
     int n=sizeof(arr);
     int k=2;

     for (int i = 0; i < n; i++)
     {
        if(k==arr[i]){
            printf("%d\n",arr[i]);
            printf("%d \n",i);
            break;
        }
     }
     
return 0;
}