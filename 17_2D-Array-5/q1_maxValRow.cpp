/* Programmer = Sudhanshu Barnwal
Topic =
Purpose = Given a 2D matrix with m rows and n columns containing integers. Print and return the row number with maximum sum in the array.

m = 3
n = 3
arr[] = {{1,9,6}, {4,5,2}, {7,8,3}}
Output = 3
Explanation: The 3rd row has the maximum sum which is 18

m = 3
n = 3
arr[] = {{1,2,3}, {1,3,2}, {2,1,3}}
Output = 1
Explanation: All the rows have the same sum i.e. 6 so return any row number.

Date = 01/09/2023   */

#include <bits/stdc++.h>
using namespace std;

void maxValRowFromMatrix(vector<vector<int>> &matrix)
{

    int row = matrix.size();
    int col = matrix[0].size();

    vector<int> maxSum(row, 0);
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            maxSum[i] = maxSum[i] + matrix[i][j];
        }
    }

    int newMax = maxSum[0];
    int getRow = 1;
    for (int i = 1; i < row; i++)
    {
        if (maxSum[i] > newMax)
        {
            newMax = maxSum[i];
            getRow = i + 1;
        }
    }

    cout << "\nThe " << getRow << " row has the maximum sum which is " << newMax << endl;
}

int main()
{

    int row, col;
    cout << "\nEnter row : ";
    cin >> row;
    cout << "\nEnter col : ";
    cin >> col;

    vector<vector<int>> vec(row, vector<int>(col));

    for (int i = 0; i < row; i++)
    {
        cout << "\n ------------ Enter the value of " << i << " index : ----------- " << endl;
        for (int j = 0; j < col; j++)
        {
            cout << "\nEnter the value of " << i << j << " index : ";
            cin >> vec[i][j];
        }
    }
    cout << endl;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << vec[i][j] << "\t";
        }
        cout << endl;
    }

    maxValRowFromMatrix( vec );

    cout << endl;
    return 0;
}