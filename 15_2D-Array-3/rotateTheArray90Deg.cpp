/* Programmer = Sudhanshu Barnwal
Topic = 2D-Vector
Purpose = Rotate the array in 90 degree clockwise
Date = 30/07/2023   */

#include <bits/stdc++.h>
using namespace std;

int main()
{

    int side;
    cout << "\nEnter the Row and Column of matrix once : ";
    cin >> side;

    int array[side][side];

    for (int i = 0; i < side; i++)
    {
        for (int j = 0; j < side; j++)
        {
            cout << "\nEnter the value of " << i << j << " index : ";
            cin >> array[i][j];
        }
        if (i != side - 1)
        {
            cout << "\n ------------------ NEXT ROW ------------------ " << endl;
        }
    }

    cout << "\n Given array is : \n" << endl;

    for (int i = 0; i < side; i++)
    {
        for (int j = 0; j < side; j++)
        {
            cout << array[i][j] << "\t";
        }
        cout << endl;
    }

    cout << "Rotating the array 90 degree clockwise : \n" << endl;
    for (int i = 0; i < side; i++)
    {
        for (int j = 0; j < side; j++)
        {
            cout << array[side - 1 - j][i] << "\t";
        }
        cout << endl;
    }

    cout << endl;
    return 0;
}