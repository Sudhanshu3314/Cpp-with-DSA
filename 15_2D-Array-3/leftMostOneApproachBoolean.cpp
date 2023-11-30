/* Programmer = Sudhanshu Barnwal
Topic = 2D-Array
Purpose = Given a boolean 2D-Array, where each row is sorted.Find the row with the maximum number of 1s

sample :
 row : 3 , col : 4
 int matrix[row][col]  = {{0,1,1,1},
                          {0,0,1,1},
                          {0,0,0,1}};

output: The first occurrence one in any given array will be at position [columnIndex = 1]

Date = 31/07/2023   */

#include <bits/stdc++.h>
using namespace std;

int leftMostOne(vector<vector<int>> &matrix)
{
    int indexOfRowMaxOne = -1;

    int columnIndex = matrix.size() - 1;
    for (int i = 0; i < matrix.size(); i++)
    {
        for (int j = columnIndex; j >= 0; j--)
        {
            if (matrix[i][j] == 1)
            {
                indexOfRowMaxOne = i;
                continue;
            }
            if (matrix[i][j] == 0)
            {
                columnIndex = j;
                break;
            }
        }
    }

    return indexOfRowMaxOne;
}

int main()
{

    int row, col;
    cout << "\nEnter no of Row : ";
    cin >> row;
    cout << "\nEnter no of Column : ";
    cin >> col;

    vector<vector<int>> matrix(row, vector<int>(col));

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << "\nEnter the value of " << i << j << " index : ";
            cin >> matrix[i][j];
        }
        if (i != row - 1)
        {
            cout << "\n -------------------- NEXT ROW -------------------- " << endl;
        }
    }

    cout << endl;

    int firstOccurenceOneRowIndex = leftMostOne(matrix);

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    cout << firstOccurenceOneRowIndex << endl;
    cout << endl;
    return 0;
}