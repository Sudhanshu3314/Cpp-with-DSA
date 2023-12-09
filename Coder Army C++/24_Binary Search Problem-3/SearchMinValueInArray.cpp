/*  ----------------------- Hare Krishn  -----------------------
Programmer = Sudhanshu Barnwal
Topic = Binary Search Problem
Purpose = Search Minimum Value in Array
Date = 07/12/2023   */

#include <bits/stdc++.h>
using namespace std;

int searchMinValueInArray(int array[], int size)
{
    int start = 0;
    int end = size - 1;
    int mid;
    while (start <= end)
    {
        mid = start + (end - start) / 2;
        if (array[0] < array[mid])
            start = mid + 1;
        else if (array[0] > array[mid])
            end = mid - 1;
    }
    return mid;
}

int main()
{

    int arr[] = {7, 9, 10, 12, 0, 1, 6};

    int size = sizeof(arr) / sizeof(arr[0]);

    cout << "\nArray is { ";
    for (int i = 0; i < size; i++)
    {
        if (i != size - 1)
            cout << arr[i] << " , ";
        else if (i == size - 1)
            cout << arr[i] << " } ";
    }

    cout << endl;
    cout << "\nIndex of Minimum Value : " << searchMinValueInArray(arr, size) << endl;
    cout << "\nMinimum Value in Array: " << arr[searchMinValueInArray(arr, size)] << endl;

    return 0;
}