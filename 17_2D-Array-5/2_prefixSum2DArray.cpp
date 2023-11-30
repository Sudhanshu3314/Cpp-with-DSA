/* Programmer = Sudhanshu Barnwal
Topic = Prefix Sum in 2D Array ( Method 2 Pre Calculating horizontal sum for each row in matrix )
Purpose = Given a matrix 'a' of dimension n X m and 2 co-ordinates ( l1 , r1 ) and ( l2 , r2 ). Return the sum of rectangle from ( l1 , r1 ) to ( l2 , r2 )

    1       2       3       4
    5       6       7       8
    9       10      11      12
    13      14      15      16

    ( l1 , r1 ) = ( 1 , 1 )
    ( l2 , r2 ) = ( 2 , 2 )

Date = 05/08/2023   */

#include <bits/stdc++.h>
using namespace std;

void takeInputAndPrintMatrix(vector<vector<int>> &matrix)
{
    for (int i = 0; i < matrix.size(); i++)
    {
        cout << "\n ---------- Enter the value of " << i << " Row : ------ " << endl;
        for (int j = 0; j < matrix[i].size(); j++)
        {
            cout << "\nEnter the value of " << i << j << " index : ";
            cin >> matrix[i][j];
        }
    }

    cout << endl;

    cout << "\nMatrix is looking like this : " << endl;
    for (int i = 0; i < matrix.size(); i++)
    {
        for (int j = 0; j < matrix[i].size(); j++)
        {
            cout << matrix[i][j] << "\t";
        }
        cout << endl;
    }
}

void prefixSumArrRowWise(vector<vector<int>> &matrix)
{

    for (int i = 0; i < matrix.size(); i++)
    {
        for (int j = 0; j < matrix[i].size(); j++)
        {
            matrix[i][j + 1] += matrix[i][j]; // matrix[i][j + 1] = matrix[i][j + 1] + matrix[i][j];
        }
    }
}

int sumOfRectangleMatrix(vector<vector<int>> &matrix, int &l1, int &r1, int &l2, int &r2)
{
    int sum = 0;
    for (int row = l1; row <= l2; row++)
    {
        if (r1 != 0)
        {
            sum += (matrix[row][r2] - matrix[row][r1 - 1]);
        }
        else if (r1 == 0)
        {
            sum += matrix[row][r2];
        }
    }

    return sum;
}

int main()
{

    int row, col;
    cout << "\nEnter no of row : ";
    cin >> row;
    cout << "\nEnter no of column : ";
    cin >> col;

    vector<vector<int>> array(row, vector<int>(col));

    takeInputAndPrintMatrix(array);

    cout << endl;

    prefixSumArrRowWise(array);

    cout << "\nNow, Matrix Looking like this by doing Prefix Sum from row wise : " << endl;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << array[i][j] << "\t";
        }
        cout << endl;
    }

    int numOfQueries;
    cout << "\nEnter that how many times you wanna give queries : ";
    cin >> numOfQueries;

    while (numOfQueries--)
    {
        int l1, r1, l2, r2;
        cout << "\nEnter the value of l1 : ";
        cin >> l1;
        cout << "\nEnter the value of r1 : ";
        cin >> r1;
        cout << "\nEnter the value of l2 : ";
        cin >> l2;
        cout << "\nEnter the value of r2 : ";
        cin >> r2;

        int result = sumOfRectangleMatrix(array, l1, r1, l2, r2);

        cout << "\n --------- >  Sum : " << result << endl;
    }

    cout << endl;
    return 0;
}