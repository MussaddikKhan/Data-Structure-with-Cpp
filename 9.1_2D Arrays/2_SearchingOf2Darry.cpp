// Searching in 2D array

#include <bits/stdc++.h>
using namespace std;

int32_t main()
{

    int n, m;

    cin >> n >> m;

    int arr[n][m];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> arr[i][j];
        }
    }

    int key;
    cin>>key;

    bool flag = false;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (arr[i][j] == key)
            {
                cout<<i<<" "<<j<<endl;

                flag = true;
            }
        }
    }

    if(flag){
        cout<<"The element is found"<<endl;
    }
    else{
        cout<<"the element is not found"<<endl;
    }

    return 0;
}