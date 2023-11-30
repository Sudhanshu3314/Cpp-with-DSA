/*  ----------------------- Hare Krishn  -----------------------
Programmer = Sudhanshu Barnwal
Topic = Recursion
Purpose =
Date = /09/2023   */

#include <bits/stdc++.h>
using namespace std;

int main()
{

    cout << "\n Hare Krishn " << endl;

    int row;
    cout << "\nEnter no. of row : ";
    cin >> row;
    // int col;
    // cout << "\nEnter no. of column : ";
    // cin >> col;

    cout << endl;
    int j = 1 ;
    for (int i = 1; i <= row; i++)
    {
        int count = 0;
        for (int j = 1; j <= row - i; j++)
        {
            cout << " ";
        }
        for ( j = j + 1 ; j > 0; j++)
        {
            int twofact = 2;
            for (int k = 1; k <= j; k++)
            {
                if (j % k == 0)
                {
                    twofact--;
                }
            }
            if (twofact == 0)
            {
                cout << j << " ";
                count++;
            }
            if (count == i)
            {
                break;
            }
        }
        cout << endl;
    }

    cout << endl;
    return 0;
}