/*  ----------------------- हरे कृष्ण  -----------------------
Programmer = Sudhanshu Barnwal
Topic = Binary Search Problem
Purpose = Peak Index in Mountain Array
Date = 07/12/2023   */

#include <bits/stdc++.h>
using namespace std;

int peakIndexInMountainArray(int array[], int size)
{

    int start = 0;
    int end = size - 1;
    while (start <= end)
    {
        int mid = start + (end-start) / 2;
        // 1 6 4 3 2 
        int mid = end + (start-end) / 2;
        if (array[mid] > array[mid - 1] && array[mid] > array[mid + 1])
            return mid;
        else if (array[mid-1] > array[mid])
            end = mid - 1;
        else
            start = mid + 1;
    }

    return 0;
}

int main()
{

    int arr[] = {2, 4, 6, 7, 8, 10, 9, 7, 4, 0};
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
    cout << peakIndexInMountainArray(arr, size) << endl;

    cout << endl;
    return 0;
}