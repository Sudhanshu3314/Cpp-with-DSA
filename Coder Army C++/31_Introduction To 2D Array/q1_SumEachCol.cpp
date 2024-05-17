/*  ----------------------- हरे कृष्ण  -----------------------

Programmer = Sudhanshu Barnwal
Topic = 2D Array
Purpose = Print sum of each column in 2D array.
Date = 17/05/2024   */

#include <bits/stdc++.h>
using namespace std;

int main()
{

    cout << endl;
    int arr[][4] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16};

    int rowSize = sizeof(arr) / sizeof(arr[0]);
    int colSize = sizeof(arr[0]) / sizeof(arr[0][0]);

    // Size of all elements in 2d array : arr = 48 bytes
    // Size of 1st row in 2d array : arr[0] = 12 bytes
    // Size of single element in 2d array : arr[0][0] = 4 bytes

    // cout << "Row size : " << sizeof(arr) << "/ " << sizeof(arr[0]) << " = " << sizeof(arr) / sizeof(arr[0]) << endl;
    // cout << endl;
    // cout << "Column size : " << sizeof(arr[0]) << "/ " << sizeof(arr[0][0]) << " = " << sizeof(arr[0]) / sizeof(arr[0][0]) << endl;

    // 1   2   3   4
    // 5   6   7   8 
    // 9   10  11  12
    // 13  14  15  16

    for (int i = 0; i < colSize; i++)
    {
        int total = 0;
        for (int j = 0; j < rowSize; j++)
        {
            total = total + arr[j][i];
        }
        cout << "For " << i << " index Column : " << total << endl;
    }

    cout << endl;
    return 0;
}
