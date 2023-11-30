/* Programmer = Sudhanshu Barnwal
Topic =
Purpose =
Date = /08/2023   */

#include <bits/stdc++.h>
using namespace std;

int main()
{

    int rowCol;

    cout << "\nEnter no. of Row and Column Once : ";
    cin >> rowCol;

    vector<vector<int>> vec(rowCol, vector<int>(rowCol));

    for (int i = 0; i < rowCol; i++)
    {
        cout << "\n -------------- Enter the value of " << i + 1 << " row : ---------- " << endl;
        for (int j = 0; j < rowCol; j++)
        {
            cout << "\nEnter the value of " << i << j << " index : ";
            cin >> vec[i][j];
        }
    }

    for (int i = 0; i < rowCol; i++)
    {
        int d = INT_MAX;
        for (int j = 0; j < rowCol; j++)
        {
            if (i == j)
            {
                d = (i * 10) + j;
            }
            if (d <= (i * 10) + j)
            {
                cout << vec[i][j] << "\t";
            }
            else
            {
                cout << " "
                     << "\t";
            }
        }
        cout << endl;
    }

    cout << endl;
    return 0;
}