/* Programmer = Sudhanshu Barnwal
Topic = Spiral Pattern
Purpose = Given a n x m matrix 'a' return all elements of the matrix in spiral order

    1   2   3
    4   5   6
    7   8   9

 ans = 1 2 3 6 9 8 7 4 5

Date = 04/08/2023   */

#include <bits/stdc++.h>
using namespace std;

void spiralOrder(vector<vector<int>> &matrix)
{

    int left = 0;
    int right = matrix[0].size() - 1;
    int top = 0;
    int bottom = matrix.size() - 1;

    int direction = 0;
    while ((left <= right) && (top <= bottom))
    {
        if (direction == 0)
        {
            // left --> right
            for (int col = left; col <= right; col++)
            {
                cout << matrix[top][col] << " "; // here , row constant value i.e. top
            }
            top++;
        }
        else if (direction == 1)
        {
            // top --> bottom
            for (int row = top; row <= bottom; row++)
            {
                cout << matrix[row][right] << " "; // here ,column constant value i.e. right
            }
            right--;
        }
        else if (direction == 2)
        {
            // right --> left
            for (int col = right; col >= left; col--)
            {
                cout << matrix[bottom][col] << " "; // here, bottom constant value i.e. bottom
            }
            bottom--;
        }
        else if (direction == 3)
        {
            // bottom --> top
            for (int row = bottom; row >= top; row--)
            {
                cout << matrix[row][left] << " ";
            }
            left++;
        }

        direction = (direction + 1) % 4;
    }
}

int main()
{

    int row, col;
    cout << "\nEnter no of row : ";
    cin >> row;

    cout << "\nEnter no of column : ";
    cin >> col;

    vector<vector<int>> matrix(row, vector<int>(col));

    for (int i = 0; i < row; i++)
    {
        cout << "\n -------- Enter the value of " << i << " Row : -------- > " << endl;
        for (int j = 0; j < col; j++)
        {
            cout << "\nEnter the value of " << i << j << " index : ";
            cin >> matrix[i][j];
        }
    }

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << matrix[i][j] << "\t";
        }
        cout << endl;
    }

    spiralOrder(matrix);
    cout << endl;

    cout << endl;
    return 0;
}