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

int sortedOneMaxOccurence(vector<vector<int>> &v)
{
    int indexOfFirstOneRow = -1;
    int maxOneCount = INT_MIN;

    for (int i = 0; i < v.size(); i++)
    {
        int column = v[i].size();
        for (int j = 0; j < v[i].size(); j++)
        {
            int countOne;
            if (v[i][j] == 1)
            {
                countOne = column - j;
                if (countOne > maxOneCount)
                {
                    maxOneCount = countOne;
                    indexOfFirstOneRow = i; // Here , i return the index of row where maximum no of ones are present
                    break; // here , we break the condition bcoz there is no need to examine after getting one 1's bcoz array is sorted so it make sense that one will continue after that's why this break is here
                }
            }
        }
    }

    return indexOfFirstOneRow;
}

int main()
{

    int row, col;
    cout << "\nEnter no of row : ";
    cin >> row;
    cout << "\nEnter no of column : ";
    cin >> col;

    vector<vector<int>> vec(row, vector<int>(col));

    for (int i = 0; i < row; i++)
    {
        cout << "\n ------ Enter the value of " << i << " Row : -------- " << endl;
        for (int j = 0; j < col; j++)
        {
            cout << "\nEnter the value of " << i << j << " index : ";
            cin >> vec[i][j];
        }
    }

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << vec[i][j] << " ";
        }
        cout << endl;
    }

    int indexOfFirstOneOccurence = sortedOneMaxOccurence(vec);

    cout << indexOfFirstOneOccurence << endl;

    cout << endl;
    return 0;
}