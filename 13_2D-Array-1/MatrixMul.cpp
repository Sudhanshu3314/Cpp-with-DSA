/* Programmer = Sudhanshu Barnwal
Topic = 2D-Array
Purpose = Write a program for multiplication of matrix
Date = 26/07/2023   */

#include <bits/stdc++.h>
using namespace std;

int main()
{
startProgram:

    int row1, col1;
    cout << "\nEnter no. of Row of A Matrix : ";
    cin >> row1;
    cout << "\nEnter no. of Column of A Matrix : ";
    cin >> col1;

    int matrixA[row1][col1];

    cout << "---- Enter Value of A Matrix : ------------";
    cout << endl;
    for (int i = 0; i < row1; i++)
    {
        for (int j = 0; j < col1; j++)
        {
            cout << "\nEnter the Value of Indices " << i << j << " : ";
            cin >> matrixA[i][j];
        }
    }

    cout << " -------------------------------------------------------- " << endl;

    int row2, col2;
    cout << "\nEnter no. of Row of B Matrix : ";
    cin >> row2;
    cout << "\nEnter no. of Column of B Matrix : ";
    cin >> col2;

    int matrixB[row2][col2];

    cout << "---- Enter Value of B Matrix : ------------";
    cout << endl;
    for (int i = 0; i < row2; i++)
    {
        for (int j = 0; j < col2; j++)
        {
            cout << "\nEnter the Value of Indices " << i << j << " : ";
            cin >> matrixB[i][j];
        }
    }

    cout << endl;
    int AnsMatrix[row1][col2];
    if (col1 == row2)
    {
        for (int i = 0; i < row1; i++)
        {
            for (int j = 0; j < col2; j++)
            {
                int ans = 0;
                for (int k = 0; k < row2; k++)
                {
                    ans += (matrixA[i][k] * matrixB[k][j]);
                }
                AnsMatrix[i][j] = ans;
            }
        }
    }
    else
    {
        cout << "\n Multiplication is Not Possible for this row and column matrix................" << endl;
        cout << "\n< --------- You Need to give Input again --------- > " << endl;
        cout << endl;
        goto startProgram;
    }

    cout << "\nMultiplication of Matrix A and Matrix B is " << endl;
    for (int i = 0; i < row1; i++)
    {
        for (int j = 0; j < col2; j++)
        {
            cout << matrixA[i][j] << "\t";
        }
        cout << endl;
    }

    cout << "    X " << endl;

    for (int i = 0; i < row1; i++)
    {
        for (int j = 0; j < col2; j++)
        {
            cout << matrixB[i][j] << "\t";
        }
        cout << endl;
    }

    cout << "    = " << endl;

    for (int i = 0; i < row1; i++)
    {
        for (int j = 0; j < col2; j++)
        {
            cout << AnsMatrix[i][j] << "\t";
        }
        cout << endl;
    }

    cout << endl;
    return 0;
}