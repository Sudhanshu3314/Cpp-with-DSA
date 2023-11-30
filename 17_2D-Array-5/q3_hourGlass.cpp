/* Programmer = Sudhanshu Barnwal
Topic =
Purpose = You are given an m x n integer matrix grid. Here m>=3 and n>=3
We define an hourglass as a part of the matrix with the following shape:
Date = /09/2023   */

#include <bits/stdc++.h>
using namespace std;

int hourGlass(vector<vector<int>> &vec)
{
    int maxValue = INT_MIN;
    int rowMax = 0;
    int colMax = 0;
    for (int i = 0; i < vec.size(); i++)
    {
        if (i == vec.size() - 2)
        {
            break;
        }

        for (int j = 0; j < vec[i].size(); j++)
        {
            if (j == vec[i].size() - 2)
            {
                break;
            }

            // int upperLine = vec[i][j] + vec[i][j + 1] + vec[i][j + 2];
            // int midLine = vec[i + 1][j + 1];
            // int bottomLine = vec[i + 2][j] + vec[i + 2][j + 1] + vec[i + 2][j + 2];
            // int sum = upperLine + midLine + bottomLine;

            int sum = vec[i][j] + vec[i][j + 1] + vec[i][j + 2] + vec[i + 1][j + 1] + vec[i + 2][j] + vec[i + 2][j + 1] + vec[i + 2][j + 2];

            if (sum > maxValue)
            {
                rowMax = i;
                colMax = j;
                maxValue = sum;
            }
        }
    }

    cout << vec[rowMax][colMax] << " + " << vec[rowMax][colMax + 1] << " + " << vec[rowMax][colMax + 2] << " + " << vec[rowMax + 1][colMax + 1] << " + " << vec[rowMax + 2][colMax] << " + " << vec[rowMax + 2][colMax + 1] << " + " << vec[rowMax + 2][colMax + 2] << " = ";

    return maxValue;
}

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
        cout << "\n ------------> Enter the value of " << i + 1 << " row : " << endl;
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

    cout << endl;

    cout << hourGlass(vec) << endl;

    cout << endl;
    return 0;
}