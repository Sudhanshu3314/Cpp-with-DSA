/* Programmer = Sudhanshu Barnwal
Topic =
Purpose =
Date = /09/2023   */

#include <bits/stdc++.h>
using namespace std;

bool perfectMatrixOrNot(vector<vector<int>> &v)
{
    for (int i = 0; i < v.size() - 1; i++)
    {
        for (int j = 0; j < v[i].size() - 1; j++)
        {
            if (v[i][j] != v[i + 1][j + 1])
            {
                return false;
            }
        }
    }
    return true;
}

int main()
{

    int row, col;
    cout << "\nEnter no. of Row : ";
    cin >> row;
    cout << "\nEnter no. of Column : ";
    cin >> col;

    vector<vector<int>> vec(row, vector<int>(col));

    for (int i = 0; i < row; i++)
    {
        cout << "\n --------------- Enter value of " << i + 1 << " row ---------------------- " << endl;
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
            cout << vec[i][j] << "\t";
        }
        cout << endl;
    }

    if (perfectMatrixOrNot(vec))
    {
        cout << "\n -----> This is Perfect matrix. " << endl;
    }
    else if (perfectMatrixOrNot(vec))
    {
        cout << "\n -----> This is NOT a Perfect matrix. " << endl;
    }

    cout << endl;
    return 0;
}