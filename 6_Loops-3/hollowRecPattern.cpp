/* Programmer = Sudhanshu Barnwal
Purpose = Take the number of rows and columns then print hollow rectangular pattern
Date = 24/12/2022   */

#include <bits/stdc++.h>
using namespace std;

int main()
{

    int row, col;
    cout << "\n Enter no. of Rows :- ";
    cin >> row;

    cout << "\n Enter no. of Column :- ";
    cin >> col;

    cout << endl;
    for (int i = 1; i <= row; i++)
    {
        for (int j = 1; j <= col; j++)
        {
            if (i == 1 || j == 1 || j == col || i == row)
                cout << "*"
                     << " ";
            else
                cout << " "
                     << " ";
        }
        cout << endl;
    }

    return 0;
}