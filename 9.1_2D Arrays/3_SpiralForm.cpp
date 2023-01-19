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

    int rowStart = 0, rowEnd = n - 1;
    int coloumnStart = 0, coloumnEnd = m - 1;

    while (rowStart <= rowEnd && coloumnStart <= coloumnEnd)
    {

        //  For Row Start

        for (int col = coloumnStart; col <= coloumnEnd; col++)
        {
            cout << arr[rowStart][col] << " ";
        }
        rowStart++;

        // For Coloumn End

        for (int row = rowStart; row <= rowEnd; row++)
        {
            cout << arr[row][coloumnEnd] << " ";
        }
        coloumnEnd--;

        // For Row End;

        for (int col = coloumnEnd; col >= coloumnStart; col--)
        {
            cout << arr[rowEnd][col] << " ";
        }
        rowEnd--;

        // For coloumn Start

        for (int row = rowEnd; row >= rowStart; row--)
        {
            cout << arr[row][coloumnStart] << " ";
        }
        coloumnStart++;
    }

    return 0;
}