/* Programmer = Sudhanshu Barnwal
Purpose = Print Plus (+) Pattern
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
            if (row % 2 == 0)
            {
                if (i == row / 2 || j == row / 2 || i == (row / 2) + 1 || j == (row / 2) + 1)
                    cout << "*"
                         << " ";
                else
                    cout << " "
                         << " ";
            }
            else
            {
                if (i == (row + 1) / 2 || j == (row + 1) / 2)
                    cout << "*"
                         << " ";
                else
                    cout << " "
                         << " ";
            }
        }
        cout << endl;
    }
    return 0;
}