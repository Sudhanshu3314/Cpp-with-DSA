/* Programmer = Sudhanshu Barnwal
Purpose = Take the number of rows and columns then print hollow Column Numbered Rectangular pattern
Date = 24/12/2022   */

#include <bits/stdc++.h>
using namespace std;

int main()
{

    int row;
    cout << "\nEnter no. of Rows :- ";
    cin >> row;

    cout << endl;
    for (int i = 1; i <= row; i++)
    {
        for (int j = 1; j <= row; j++)
        {
            if (i == 1 || j == 1 || j == row || i == row)
                cout << j << " ";
            else
                cout << " "
                     << " ";
        }
        cout << endl;
    }

    return 0;
}