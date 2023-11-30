/* Programmer = Sudhanshu Barnwal
Topic =
Purpose = Given a m*n integer matrix. If an element of the matrix is 0 then set the complete row and column of that element to 0. Make the changes inplace and print the matrix.

row = 3
column = 3
arr[][] = {{1,2,3},
           {1,0,1},
           {5,6,7}}

Output: {{1,0,3},
         {0,0,0},
         {5,0,7}}

2nd case :
row = 3
column = 4

arr[][] = {{0,1,2,0},
          {3,4,5,2},
          {1,3,1,5}}

Output:{{0,0,0,0},
        {0,4,5,0},
        {0,3,1,0}}

Date = /08/2023   */

#include <bits/stdc++.h>
using namespace std;

int main()
{

    int row, col;
    cout << "\nEnter no. of row : ";
    cin >> row;
    cout << "\nEnter no. of Column : ";
    cin >> col;

    vector<vector<int>> vec(row, vector<int>(col));

    for (int i = 0; i < row; i++)
    {
        cout << "\n ------------ Enter the value of " << i + 1 << " row : ---------------- " << endl;
        for (int j = 0; j < col; j++)
        {
            cout << "\nEnter the value of " << i << j << " indexes : ";
            cin >> vec[i][j];
        }
    }
    cout << "\n----------------- The Matrix is : --------------------" << endl;
    vector<int> rowIdx;
    vector<int> colIdx;

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (vec[i][j] == 0)
            {
                rowIdx.push_back(i);
                colIdx.push_back(j);
            }
            cout << vec[i][j] << "\t";
        }
        cout << endl;
    }
    cout << endl;

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            for (int k = 0; k < rowIdx.size(); k++)
            {
                if (i == rowIdx[k])
                {
                    vec[i][j] == 0;
                }
                if (j == colIdx[k])
                {
                    vec[i][j] == 0;
                }
            }
        }
        cout << endl;
    }

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << vec[i][j] << " ";
        }
        cout << endl;
    }

    cout << endl;
    return 0;
}