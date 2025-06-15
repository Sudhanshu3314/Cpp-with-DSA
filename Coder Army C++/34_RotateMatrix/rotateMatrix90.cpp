/*  ----------------------- हरे कृष्ण  -----------------------
Programmer = Sudhanshu Barnwal
Topic = 2D Array
Purpose = Rotate Matrix 90 degree Clockwise
Date = 14/06/2025 */

#include <bits/stdc++.h>
using namespace std;

int main()
{
    cout << endl;

    vector<vector<int>> matrix{{1, 2, 3, 4, 5}, {6, 7, 8, 9, 10}, {11, 12, 13, 14, 15}, {16, 17, 18, 19, 20}, {21, 22, 23, 24, 25}};

    int row = matrix.size(), col = matrix[0].size();

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
            cout << matrix[i][j] << "\t";
        cout << endl;
    }

    // 1   2   3   4   5
    // 6   7   8   9   10
    // 11  12  13  14  15
    // 16  17  18  19  20
    // 21  22  23  24  25

    // Rotated Matrix 90 Degree

    // 21  16  11  6   1
    // 22  17  12  7   2
    // 23  18  13  8   3
    // 24  19  14  9   4
    // 25  20  15  10  5

    // 00 01 02 03 04
    // 10 11 12 13 14
    // 20 21 22 23 24
    // 30 31 32 33 34
    // 40 41 42 43 44

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < i; j++)
            swap(matrix[i][j], matrix[j][i]);
    }

    cout << endl;
    // Trasposing matrix
    cout << " ------------ Transpose of Matrix Done --------- " << endl;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
            cout << matrix[i][j] << "\t";
        cout << endl;
    }
    cout << endl;
    // Reverse each row of matrix
    for (int i = 0; i < row; i++)
    {
        int start = 0, end = col - 1;
        while (start < end)
        swap(matrix[i][start++], matrix[i][end--]);
    }
    cout << " ------------ Reverse of each row of matrix Done for creating like 90 degree rotation --------- " << endl;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
            cout << matrix[i][j] << "\t";
        cout << endl;
    }

    cout << endl;
    return 0;
}