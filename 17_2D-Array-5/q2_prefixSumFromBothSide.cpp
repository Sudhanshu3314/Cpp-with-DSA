/* Programmer = Sudhanshu Barnwal
Topic =
Purpose = Given a matrix arr[][] of integers, print the prefix sum matrix for it.
Date = /09/2023   */

#include <bits/stdc++.h>
using namespace std;

void prefixSum(vector<vector<int>> &v)
{

    int rowAns = 0;
    int colAns = 0;
    cout << endl;
    for (int i = 0; i < v.size(); i++)
    {
        for (int j = 0; j < v[i].size(); j++)
        {
            if (i == 0)
            {
                rowAns += v[i][j];
                v[i][j] = rowAns;
            }
            if (j == 0)
            {
                colAns += v[i][j];
                v[i][j] = colAns;
            }
            if (i != 0 && j != 0)
            {
                v[i][j] = v[i][j] + v[i - 1][j] + v[i][j - 1] - v[i - 1][j - 1];
            }
            cout << v[i][j] << "\t";
        }
        cout << endl;
    }
}

int main()
{

    int rowCol;
    cout << "\nEnter no. of row and Column Once : ";
    cin >> rowCol;

    vector<vector<int>> vec(rowCol, vector<int>(rowCol));

    for (int i = 0; i < rowCol; i++)
    {
        cout << "\n --------------- Enter the Value of " << i + 1 << " index -------------- " << endl;
        for (int j = 0; j < rowCol; j++)
        {
            cout << "\nEnter the value of " << i << j << " index : ";
            cin >> vec[i][j];
        }
    }

    prefixSum(vec);

    cout << endl;
    return 0;
}