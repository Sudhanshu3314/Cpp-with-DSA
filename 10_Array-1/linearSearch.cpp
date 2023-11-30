/* Programmer = Sudhanshu Barnwal
Purpose = Linear Search
Date = /01/2023   */

#include <bits/stdc++.h>
using namespace std;

int main()
{

    int arr[] = {3, 5, 7, 6, 1, 8};
    // Array of integers to be searched.
    int key;
    cout << "\nEnter the value of key : ";
    cin >> key;

    int ans = -1;

    for (int i = 0 ; i < sizeof(arr)/sizeof(int) ; i++)
    {
        if (arr[i] == key)
        {
            ans = i;
            break;
        }
    }
    cout << ans << endl;

    cout << endl;
    return 0;
}