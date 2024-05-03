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

    cout << endl;

    for (int i = 1; i <= row; i++)
    {
        for (int j = 1; j <= row - i; j++)
        {
            cout << " ";
        }
        for (int j = 1; j <= i; j++)
        {
            cout << " "
                 << "*";
        }
        cout << endl;
    }

    for (int i = row; i >= 1; i--)
    {
        for (int j = 1; j <= row - i; j++)
        {
            cout << " ";
        }
        for (int j = 1; j <= i; j++)
        {
            cout << " "
                 << "*";
        }
        cout << endl;
    }

    cout << endl;
    return 0;
}