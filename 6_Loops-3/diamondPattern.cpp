/* Programmer = Sudhanshu Barnwal
Purpose = Diamond Pattern
Date = 09/01/2023   */

#include <bits/stdc++.h>
using namespace std;

int main()
{

    int row;
    startProgram:
    cout << "\n Enter no. of Row :- ";
    cin >> row;

    cout << endl;
    if (row % 2 == 0)
    {
        for (int i = 1; i <= row / 2; i++)
        {
            for (int j = 1; j <= row / 2 - i; j++)
            {
                cout << "  ";
            }
            for (int j = 1; j <= 2 * i - 1; j++)
            {
                cout << "*"
                     << " ";
            }
            cout << endl;
        }
        for (int i = row / 2; i >= 1; i--)
        {
            for (int j = 1; j <= row / 2 - i; j++)
            {
                cout << "  ";
            }
            for (int j = 1; j <= 2 * i - 1; j++)
            {
                cout << "*"
                     << " ";
            }
            cout << endl;
        }
    }

    else
    {
        for (int i = 1; i <= row / 2 + 1; i++)
        {
            for (int j = 1; j <= row / 2 + 1 - i; j++)
            {
                cout << "  ";
            }
            for (int j = 1; j <= 2 * i - 1; j++)
            {
                cout << "*"
                     << " ";
            }
            cout << endl;
        }
        for (int i = row / 2; i >= 1; i--)
        {
            for (int j = 1; j <= (row / 2 + 1) - i; j++)
            {
                cout << "  ";
            }
            for (int j = 1; j <= 2 * i - 1; j++)
            {
                cout << "*"
                     << " ";
            }
            cout << endl;
        }
    }

    cout << endl;
    goto startProgram;
    return 0;
}