/*  ----------------------- हरे कृष्ण  -----------------------
Programmer = Sudhanshu Barnwal
Topic = 2D Array
Purpose = Print Row Index with Maximum Sum
Date = 21/03/2024   */

#include <bits/stdc++.h>
using namespace std;

int main()
{

    cout << endl;
    int arr[4][3] = {5, 2, 6, 2, 7, 2, 8, 1, 6, 9, 1, 3};

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << arr[i][j] << "\t";
        }
        cout << endl;
    }

    cout << endl;

    int sum = INT_MIN;
    int index = -1;

    for (int row = 0; row < 4; row++)
    {
        int total = 0;
        for (int col = 0; col < 3; col++)
        {
            total = total + arr[row][col];
        }
        if (sum < total)
        {
            sum = total;
            index = row;
        }
    }

    cout << index << endl;

    cout << endl;
    return 0;
}