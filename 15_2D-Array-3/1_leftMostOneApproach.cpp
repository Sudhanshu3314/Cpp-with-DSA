/* Programmer = Sudhanshu Barnwal
Topic =
Purpose =
Date = /07/2023   */

#include <bits/stdc++.h>
using namespace std;

int leftMostOne(vector<vector<int>> &matrix)
{

    int leftMostOneIndex = -1;
    int maxOneRow = INT_MIN;

    int j = matrix[0].size() - 1; // column index 

    // finding leftmost one one in 0th row
    while (j >= 0 && matrix[0][j] == 1)
    {
        leftMostOneIndex = j;
        maxOneRow = 0;
        j--;
    }

    // Check in rest of the rows if we can find  a one left to the leftmost One
    for (int i = 0; i < matrix.size(); i++)
    {
        while (j >= 0 && matrix[i][j] == 1)
        {
            leftMostOneIndex = j;
            maxOneRow = i;
            break;
        }
    }

    return maxOneRow;
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

    cout << endl;
    return 0;
}