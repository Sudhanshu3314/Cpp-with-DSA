/*  ----------------------- हरे कृष्ण  -----------------------
Programmer = Sudhanshu Barnwal
Topic = 2D Array
Purpose = Add 2d Matrix
Date = 21/03/2024   */

#include <bits/stdc++.h>
using namespace std;

int main()
{

    cout << endl;
    int arr1[4][3] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12};
    int arr2[4][3] = {5, 2, 6, 2, 7, 2, 8, 1, 6, 9, 1, 13};

    int ans[4][3];

    for (int row = 0; row < 4; row++)
    {
        for (int col = 0; col < 3; col++)
        {
            ans[row][col] = arr1[row][col] + arr2[row][col];
            cout << ans[row][col] << "\t";
        }
        cout << endl;
    }

    cout << endl;
    return 0;
}