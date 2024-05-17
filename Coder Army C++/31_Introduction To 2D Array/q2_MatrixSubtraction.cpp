/*  ----------------------- हरे कृष्ण  -----------------------
Programmer = Sudhanshu Barnwal
Topic = 2D Array
Purpose = Subtract 2d Matrix
Date = 17/05/2024   */

#include <bits/stdc++.h>
using namespace std;

int main()
{

    cout << endl;
    int arr1[4][3] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12};
    int arr2[4][3] = {5, 2, 6, 2, 7, 2, 8, 1, 6, 9, 1, 13};

    int ans[4][3];

    for (int row = 0; row < sizeof(arr1) / sizeof(arr1[0] ) ; row++)
    {
        for (int col = 0; col < sizeof(arr1[0]) / sizeof(arr1[0][0] ); col++)
        {
            cout << arr1[row][col] - arr2[row][col] << "\t";
        }
        cout << endl;
    }

    cout << endl;
    return 0;
}