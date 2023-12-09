/*  ----------------------- Hare Krishn  -----------------------
Programmer = Sudhanshu Barnwal
Topic = Introduction to Array
Purpose = second Max Value return
Date = 08/12/2023   */

#include <bits/stdc++.h>
using namespace std;

int secondMax(int array[], int size)
{
    int max = INT_MIN;

    for (int i = 0; i < size; i++)
    {
        if (max < array[i])
            max = array[i];
    }

    int max2nd = INT_MIN;
    for (int i = 0; i < size; i++)
    {
        if (max2nd < array[i] && array[i] != max)
            max2nd = array[i];
    }

    return max2nd;
}

int main()
{

    int arr[] = {42, 1, 66, 87, 12, 70, 23, 67, 133};

    int size = sizeof(arr) / sizeof(arr[0]);

    cout << "\nArray is { ";
    for (int i = 0; i < size; i++)
    {
        if (i != size - 1)
            cout << arr[i] << " , ";
        else if (i == size - 1)
            cout << arr[i] << " } " << endl;
    }

    cout << endl;

    cout << "\nSecond Max in this array is " << secondMax(arr, size) << endl;

    cout << endl;
    return 0;
}