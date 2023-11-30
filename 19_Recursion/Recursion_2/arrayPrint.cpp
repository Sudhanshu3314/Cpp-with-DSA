/* Programmer = Sudhanshu Barnwal
Topic = Recursion
Purpose = Printing array using recursion method
Date = 21/09/2023   */

#include <bits/stdc++.h>
using namespace std;

void printArr(int *arr, int idx, int length)
{

    if (idx == length)
        return;

    cout << arr[idx] << " ";
    printArr(arr, idx + 1, length);
}

int main()
{

    int arr[] = {4, 6, 7, 1, 3, 6};
    int index = 0;
    int len = sizeof( arr ) / sizeof( int );
    printArr(arr, index, len);

    return 0;
}