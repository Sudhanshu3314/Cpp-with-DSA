/* Programmer = Sudhanshu Barnwal
Purpose = Crossed Number pattern
Date = 09/01/2023   */

#include <bits/stdc++.h>
using namespace std;

int main()
{

    int row;
    cout << "\n Enter no. Of Row :- ";
    cin >> row;

    cout << endl;
    for (int i = 1; i <= row; i++)
    {
        for (int j = 1; j <= row; j++)
        {
            if (i == j)
            {
                cout << i << " ";
            }
            else if (i + j == row + 1)
            {
                cout << row - i + 1 << " ";
            }
            else
            {
                cout << "  ";
            }
        }
        cout << endl ;
    }

    cout << endl;
    return 0;
}