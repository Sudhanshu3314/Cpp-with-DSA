/*  ----------------------- हरे कृष्ण  -----------------------
Programmer = Sudhanshu Barnwal
Topic = 2D-Array
Purpose = Print 2D array
Date = 17/02/2024   */

#include <bits/stdc++.h>
using namespace std;

void print2dArray(int arr[][3], int row, int col)
{
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << arr[i][j] << "\t";
        }
        cout << endl;
    }
}

int main()
{

    cout << endl;
    int arr[4][3] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12};

    // for (int i = 0; i < 4; i++)
    // {
    //     for (int j = 0; j < 3; j++)
    //     {
    //         cout << arr[i][j] << "\t";
    //     }
    //     cout << endl;
    // }

    print2dArray(arr, 4, 3);

    cout << endl;
    return 0;
}