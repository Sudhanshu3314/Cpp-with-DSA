/*  ----------------------- हरे कृष्ण  -----------------------
Programmer = Sudhanshu Barnwal
Topic = Loop ( Print Pattern )
Purpose =
Date = 06/01/2024   */

#include <bits/stdc++.h>
using namespace std;

int main()
{

    cout << endl;

    int row, col;
    cout << "Enter no. of Row : ";
    cin >> row;
    cout << "\nEnter no. of Column : ";
    cin >> col;

    for (int i = 1; i <= row; i++)
    {
        for (int j = 1; j <= col; j++)
        {
            cout << j*j*j << " ";
        }
        cout << endl;
    }

    cout << endl;
    return 0;
}