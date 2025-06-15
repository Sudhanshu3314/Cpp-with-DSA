/*  ----------------------- हरे कृष्ण  -----------------------
Programmer = Sudhanshu Barnwal
Topic = 2D Array
Purpose = Rotate Matrix 90 degree anticlockwise
Date = 14/06/2025 */

#include <bits/stdc++.h>
using namespace std;

void printMatrix(vector<vector<int>> &matrix)
{
    int row = matrix.size(), col = matrix[0].size();
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
            cout << matrix[i][j] << "\t";
        cout << endl;
    }
}

int main()
{

    cout << endl;
    vector<vector<int>> matrix{{1, 2, 3, 4, 5}, {6, 7, 8, 9, 10}, {11, 12, 13, 14, 15}, {16, 17, 18, 19, 20}, {21, 22, 23, 24, 25}};

    int row = matrix.size(), col = matrix[0].size();
    printMatrix(matrix);

    cout << endl;

    // 1   2   3   4   5
    // 6   7   8   9   10
    // 11  12  13  14  15
    // 16  17  18  19  20
    // 21  22  23  24  25

    // Rotated Matrix 90 Degree Anticlockwise

    // 5   10  15  20  25
    // 4   9   14  19  24
    // 3   8   13  18  23
    // 2   7   12  17  22
    // 1   6   11  16  21

    // 00 01 02 03 04
    // 10 11 12 13 14
    // 20 21 22 23 24
    // 30 31 32 33 34
    // 40 41 42 43 44

    // Transpose Matrix
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < i; j++)
            swap(matrix[i][j], matrix[j][i]);
    }

    cout << " --------- Transpose Matrix ------- " << endl;
    printMatrix(matrix);

    // Reverse matrix by each column for creating it 90  degree anticlockwise
    for (int j = 0; j < col; j++)
    {
        int start = 0, end = row - 1;
        while (start < end)
            swap(matrix[start++][j], matrix[end--][j]);
    }

    cout << " --------- Reverse matrix by each column for creating it 90  degree anticlockwise ------- " << endl;
    printMatrix(matrix);

    cout << endl;
    return 0;
}