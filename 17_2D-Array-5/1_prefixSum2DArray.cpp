/* Programmer = Sudhanshu Barnwal
Topic = Prefix Sum in 2D Array ( Method 1 BruteForce Approach )
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

int sumOfRectangleMatrix(vector<vector<int>> &matrix, int &l1, int &r1, int &l2, int &r2)
{
    int sum = 0;
    for (int row = l1; row <= l2; row++)
    {
        for (int col = r1; col <= r2; col++)
        {
            sum += matrix[row][col];
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

    cout << endl;
    return 0;
}