/*  ----------------------- हरे कृष्ण  -----------------------
Programmer = Sudhanshu Barnwal
Topic = 2D Array
Purpose = Print Sum Of Diagonal Element
Date = 21/03/2024   */

#include <bits/stdc++.h>
using namespace std;

int main()
{

    cout << endl;
    int arr[4][4] = {5, 2, 6, 2, 7, 2, 8, 1, 6, 9, 1, 3, 2, 7, 1, 6};

    // 00 01 02 03
    // 10 11 12 13
    // 20 21 22 23
    // 30 31 32 33

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cout << arr[i][j] << "\t";
        }
        cout << endl;
    }

    cout << endl;

    // When row Index and Column Index is equal to both

    int first = 0;

    for (int index = 0; index < 4; index++)
    {
        first = first + arr[index][index];
    }

    int col = 4;

    int i = 0;
    int j = col - 1;

    int second = 0;

    while (j >= 0)
    {
        second = second + arr[i][j];
        j--;
        i++;
    }

    cout << first + second << endl;

    cout << endl;
    return 0;
}