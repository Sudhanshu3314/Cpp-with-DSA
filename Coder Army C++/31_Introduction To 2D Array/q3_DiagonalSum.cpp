/*  ----------------------- हरे कृष्ण  -----------------------
Programmer = Sudhanshu Barnwal
Topic = 2D Array
Purpose =  Given a matrix of size n*n, Print sum of diagonal element.
 Ex:   1 2 3
       4 5 6
       7 8 9

Date = 17/05/2024   */

#include <bits/stdc++.h>
using namespace std;

int main()
{

    cout << endl;

    // int arr[][4] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16};
    int arr[][3] = {1, 2, 3, 4, 5, 6, 7, 8, 9};

    int rowSize = sizeof(arr) / sizeof(arr[0]);
    int colSize = sizeof(arr[0]) / sizeof(arr[0][0]);

    for (int i = 0; i < rowSize; i++)
    {
        for (int j = 0; j < colSize; j++)
        {
            cout << arr[i][j] << "\t";
        }
        cout << endl;
    }

    int sameIdx = 0;

    for (int i = 0; i < colSize; i++)
    {
        sameIdx = sameIdx + arr[i][i];
    }

    int diffIdx = 0;
    for (int i = 0; i < colSize; i++)
    {
        diffIdx = diffIdx + arr[i][colSize - 1 - i];
    }

    int ans;

    if (colSize % 2 == 0)
    {
        ans = diffIdx + sameIdx;
    }
    else if (colSize % 2 != 0)
    {
        ans = diffIdx + sameIdx - arr[colSize / 2][colSize / 2];
    }

    cout << ans << endl;
    cout << endl;
    return 0;
}