/* Programmer = Sudhanshu Barnwal
Purpose = Damru Pattern
Date = 10/01/2023   */

#include <bits/stdc++.h>
using namespace std;

int main()
{

    int row;
    cout << "\n Enter no. of Row :- ";
    cin >> row;

    cout << endl;
    for (int i = 1; i <= row; i++)
    {
        for (int j = 1; j <= row; j++)
        {
            if (j == 1)
            {
                cout << "*"
                     << " ";
            }

            if ( i == j || i + j == row + 1)
            {
                cout << "*"
                     << " ";
            }

            if ( j == row )
            {
                cout << "*" << " ";
            }
            
            else
            {
                cout << " "
                     << " ";
            }
        }
        cout << endl;
    }

    cout << endl;
    return 0;
}