/*  ----------------------- हरे कृष्ण  -----------------------
Programmer = Sudhanshu Barnwal
Topic = 2D Array
Purpose = Wave form
Date = 17/05/2024   */

#include <bits/stdc++.h>
using namespace std;

int main()
{

    cout << endl;
    vector<vector<int>> vec{{1, 2, 3, 4, 5}, {6, 7, 8, 9, 10}, {11, 12, 13, 14, 15}, {16, 17, 18, 19, 20}};

    int row = vec.size(), col = vec[0].size();

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
            cout << vec[i][j] << "\t";
        cout << endl;
    }
    cout << endl;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
            cout << vec[i][j] << " ";
    }
    cout << endl;

    // 00 01 02 03 04
    // 10 11 12 13 14
    // 20 21 22 23 24
    // 30 31 32 33 34

    for (int i = 0; i < col; i++)
    {
        for (int j = 0; j < row; j++)
            cout << ((i % 2) ? vec[row - 1 - j][i] : vec[j][i]) << " ";
    }

    cout << endl;
    return 0;
}