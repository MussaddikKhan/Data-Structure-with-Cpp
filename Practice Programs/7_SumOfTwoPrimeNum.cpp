#include <bits/stdc++.h>
using namespace std;

void checkPrime(int *A ){
    cout<<A<<endl;
}

int main()
{
    int A[20] = {};
    int count;

    for (int i = 1; i <= 20; i++)
    {
        A[i] = i;
        // cout<<A[i] <<" ";
    }

    for (int i = 1; i <= 20; i++)
    {
        count = 0;
        for (int j = 1; j <= 20; j++)
        {
            if (A[i] % j == 0)
            {
                count++;
            }
        }
        if (count == 2)
        {
            cout << A[i] << " ";
        }
    }
    checkPrime(A);

    return 0;
}