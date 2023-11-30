/* Programmer = Sudhanshu Barnwal
Purpose = Take the number of rows and columns then print Two One rectangular pattern
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
            if ((i + j) % 2 == 0)
                cout << 1 << " ";
            else
                cout << 2 << " ";
        }
        cout << endl;
    }

    return 0;
}