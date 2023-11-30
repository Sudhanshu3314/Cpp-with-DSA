/* Programmer = Sudhanshu Barnwal
Purpose = Print the X pattern with the asterisk (*)
Date = 24/12/2022   */

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
        for (int j = 1; j <= row; j++)
        {
            if (i == j || i + j == row + 1)
            {
                cout << "*"
                     << " ";
            }
            else
            {
                cout << " "
                     << " ";
            }
        }
        cout << endl;
    }

    return 0;
}