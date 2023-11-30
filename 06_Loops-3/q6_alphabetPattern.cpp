/* Programmer = Sudhanshu Barnwal
Purpose = Alohabet Diamond Pattern
Date = 11/01/2023   */

#include <bits/stdc++.h>
using namespace std;

int main()
{

    int row;
    cout << "\n Enter no. of Rows :- ";
    cin >> row;

    cout << endl;

    for (int i = 1; i <= row; i++)
    {
        for (int j = 1; j <= row - i; j++)
        {
            cout << " "
                 << " ";
        }
        for (int j = 1; j <= 2 * i - 1; j++)
        {
            cout << (char)(64 + j) << " ";
        }
        cout << endl;
    }

    for (int i = row - 1; i >= 1; i--)
    {
        for (int j = 1; j <= row - i; j++)
        {
            cout << " "
                 << " ";
        }
        for (int j = 1; j <= 2 * i - 1; j++)
        {
            cout << (char)(64 + j) << " ";
        }
        cout << endl;
    }

    cout << endl;
    return 0;
}