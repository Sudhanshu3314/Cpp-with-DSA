/*  ----------------------- हरे कृष्ण  -----------------------
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

    for (int i = row; i >= 1; i--)
    {
        for (int j = 1; j <= i - 1; j++)
        {
            cout << " "
                 << " ";
        }
        for (int j = row; j >= i; j--)
        {
            cout << char(64 + j) << " ";
        }
        cout << endl;
    }

    cout << endl;
    return 0;
}