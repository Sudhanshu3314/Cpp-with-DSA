/*  ----------------------- Hare Krishn  -----------------------
Programmer = Sudhanshu Barnwal
Topic = Binary Search Problem
Purpose = Search Insert Position
Date = 06/12/2023   */

#include <bits/stdc++.h>
using namespace std;

int searchInsertPosition(int array[], int size, int aim)
{

    int start = 0;
    int end = size - 1;
    int ans = size - 1;
    while (start <= end)
    {
        int mid = start + (end - start) / 2;
        if (array[mid] == aim)
            return mid;
        else if (array[mid] > aim)
        {
            end = mid - 1;
            ans = mid;
        }
        else if (array[mid] < aim)
            start = mid + 1;
    }

    return ans;
}

int main()
{

    int arr[] = {1, 2, 5, 7, 10, 13, 17};
    int size = sizeof(arr) / sizeof(arr[0]);

    int target = 3;
    // int target = 13;
    cout << "\n Array is { ";

    for (int i = 0; i < size; i++)
    {
        if (i != size - 1)
            cout << arr[i] << " , ";
        else if (i == size - 1)
            cout << arr[i] << " } ";
    }

    cout << searchInsertPosition(arr, size, target) << endl;

    cout << endl;
    return 0;
}