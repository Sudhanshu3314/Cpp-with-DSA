/* Programmer = Sudhanshu Barnwal
Topic = 2D-Array
Purpose = Taking 2D-Array as Input
Date = 26/07/2023   */

#include <bits/stdc++.h>
using namespace std;

int main()
{

    int row, col;
    cout << "\nEnter Row of Matrix : ";
    cin >> row;

    cout << "\nEnter Column of Matrix : ";
    cin >> col;

    int matrix[row][col];

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << "\nEnter the Value of indices " << i << j << " : ";
            cin >> matrix[i][j];
        }
    }

    cout << endl;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << matrix[i][j] << "\t";
        }
        cout << endl;
    }

    cout << endl;
    return 0;
}