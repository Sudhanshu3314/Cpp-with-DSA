/*  ----------------------- Hare Krishn  -----------------------
Programmer = Sudhanshu Barnwal
Topic = Loop ( Pattern Problem )
Purpose =
Date = 06/01/2024   */

#include <bits/stdc++.h>
using namespace std;

int main()
{

    cout << endl;

    int row;
    cout << "Enter no of row : ";
    cin >> row;

    for (int i = 1; i <= row; i++)
    {
        for (int j = 1; j <= row - i; j++)
        {
            cout << " "
                 << " ";
        }
        for (int j = 1; j <= i; j++)
        {
            cout << char( j + 64) << " ";
        }
        for (int j = i-1; j >= 1 ; j--)
        {
            cout << char( j + 64 ) << " ";
        }
        cout << endl;
    }

    cout << endl;
    return 0;
}