/* Programmer = Sudhanshu Barnwal
Purpose = Take the number of rows and columns then print Numerical Triangular pattern
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
        for (int j = 1; j <= i; j++)
        {
            cout << j << " ";
        }
        cout << endl;
    }

    return 0;
}