/*  ----------------------- हरे कृष्ण  -----------------------
Programmer = Sudhanshu Barnwal
Topic = 2D Array
Purpose = Rotate 2d array by k times
Date = 14/06/2025 */

#include <bits/stdc++.h>
using namespace std;

void printMatrix(vector<vector<int>> &mat)
{
    int row = mat.size(), col = mat[0].size();
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
            cout << mat[i][j] << "\t";
        cout << endl;
    }
}

// 00 01 02 03 04
// 10 11 12 13 14
// 20 21 22 23 24
// 30 31 32 33 34
// 40 41 42 43 44

void rotateMatrix(vector<vector<int>> &matrix)
{
    int row = matrix.size(), col = matrix[0].size();
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < i; j++)
            swap(matrix[i][j], matrix[j][i]);
    }

    // Transpose of matrix
    // cout << " --------- Transpose of matrix ------------------ " << endl;
    // printMatrix(matrix);

    for (int i = 0; i < row; i++)
    {
        int start = 0, end = col - 1;
        while (start < end)
            swap(matrix[i][start++], matrix[i][end--]);
    }
    // cout << " --------- After Rotation of each row of matrix ------------------ " << endl;
    // printMatrix(matrix);
}

int main()
{

    cout << endl;
    vector<vector<int>> matrix{{1, 2, 3, 4, 5}, {6, 7, 8, 9, 10}, {11, 12, 13, 14, 15}, {16, 17, 18, 19, 20}, {21, 22, 23, 24, 25}};

    int row = matrix.size(), col = matrix[0].size();
    printMatrix(matrix);

    int k;
    cout << "\nRotate array by k times : ";
    cin >> k;

    cout << endl;
    k = k % 4;

    for (int i = 0; i < k; i++)
        rotateMatrix(matrix);

    printMatrix(matrix);
    cout << endl;
    return 0;
}