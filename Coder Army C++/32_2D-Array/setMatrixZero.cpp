/*  ----------------------- हरे कृष्ण  -----------------------
Programmer = Sudhanshu Barnwal
Topic = 2D Array
Purpose =
Date = 17/05/2024   */

#include <bits/stdc++.h>
using namespace std;

void printMatrix(vector<vector<int>> &matrix)
{
    for (int i = 0; i < matrix.size(); i++)
    {
        for (int j = 0; j < matrix[0].size(); j++)
            cout << matrix[i][j] << " ";
        cout << endl;
    }

    cout << endl;
}

int main()
{

    cout << endl;

    vector<vector<int>> matrix{{0, 1, 2, 0}, {3, 4, 5, 2}, {1, 3, 0, 5}};

    int rows = matrix.size();
    int cols = matrix[0].size();

    bool firstRow = false, firstColumn = false;
    for (int i = 0; i < cols; i++)
    {
        if (matrix[0][i] == 0)
        {
            firstRow = true;
        }
    }
    for (int i = 0; i < rows; i++)
    {
        if (matrix[i][0] == 0)
        {
            firstColumn = true;
        }
    }

    printMatrix(matrix);

    // Put the zeros at 0th index of row and column as a marker
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            if (matrix[i][j] == 0)
            {
                matrix[i][0] = 0;
                matrix[0][j] = 0;
            }
        }
    }

    printMatrix(matrix);
    // Now insert zersos in row on basis of marker
    for (int i = 1; i < rows; i++)
    {
        if (matrix[i][0] == 0)
        {
            for (int j = 1; j < cols; j++)
                matrix[i][j] = 0;
        }
    }
    printMatrix(matrix);

    // Now insert zeros in column on basis of marker
    for (int j = 1; j < cols; j++)
    {
        if (matrix[0][j] == 0)
        {
            for (int i = 1; i < rows; i++)
                matrix[i][j] = 0;
        }
    }

    printMatrix(matrix);

    if (firstRow)
    {
        for (int i = 0; i < cols; i++)
        {
            matrix[0][i] = 0;
        }
    }
    if (firstColumn)
    {
        for (int i = 0; i < rows; i++)
        {
            matrix[i][0] = 0;
        }
    }

    printMatrix(matrix);
    cout << endl;
    return 0;
}