#include <bits/stdc++.h>
using namespace std;

int binarySearch(int arr[], int n, int key)
{

    int low = 0;
    int high = n;

    while (low <= high)
    {
        int mid = (low + high) / 2;

        if (arr[mid] == key)
        {
            return mid;
        }
        else if (arr[mid] < key)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }
    return -1;
}

int32_t main()
{

    int n;

    cout << "Enter the size of array" << endl;

    cin >> n;

    int arr[n];

    cout << "Enter the element in array " << endl;

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int key;

    cout << "Enter a key " << endl;

    cin >> key;

    cout << "The element found in index" << endl;

    cout << binarySearch(arr, n, key) << endl;

    return 0;
}