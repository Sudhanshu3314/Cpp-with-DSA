/*  ----------------------- हरे कृष्ण  -----------------------
Programmer = Sudhanshu Barnwal
Topic = 2D Array
Purpose = Print Row Index with max Sum
Date = 17/05/2024   */

#include <bits/stdc++.h>
using namespace std;

void printArray(int array[][3], int row, int col)
{
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
            cout << array[i][j] << "\t";
        cout << endl;
    }
    cout << endl;
}

int rowIdxWithMaxSum(int array[][3], int row, int col)
{
    int max = INT_MIN;
    int index = -1;
    for (int i = 0; i < row; i++)
    {
        int sum = 0;
        for (int j = 0; j < col; j++)
            sum += array[i][j];

        if( max < sum ){
            max = sum;
            index = i;
        }
        cout << endl;
    }
    return index;
}

int main()
{

    cout << endl;

    int arr[4][3] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12};

    printArray(arr, 4, 3);
    cout << rowIdxWithMaxSum(arr, 4, 3);

    cout << endl;
    return 0;
}