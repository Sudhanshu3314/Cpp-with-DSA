/*  ----------------------- हरे कृष्ण  -----------------------
Programmer = Sudhanshu Barnwal
Topic = 2D Array
Purpose = Reverse each row of matrix
Date = 17/05/2024   */

#include <bits/stdc++.h>
using namespace std;

void printArray(int array[][5], int row, int col)
{
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
            cout << array[i][j] << "\t";
        cout << endl;
    }
    cout << endl;
}

void reverseEachRow(int array[][5], int row, int col)
{
    for (int i = 0; i < row; i++)
    {
        int start = 0, end = col - 1;
        while (start < end)
        {
            int temp = array[i][start];
            array[i][start++] = array[i][end];
            array[i][end--] = temp;
        }
    }
}

int main()
{

    // 00 01 02 03 04
    // 10 11 12 13 14
    // 20 21 22 23 24
    // 30 31 32 33 34
    // 40 41 42 43 44


    int arr[4][5] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 3, 78, 13, 72, 67, 34, 362, 6};

    printArray(arr, 4, 5);
    reverseEachRow(arr, 4, 5);
    printArray(arr, 4, 5);

    cout << endl;
    return 0;
}