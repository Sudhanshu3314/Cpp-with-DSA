/*  ----------------------- Hare Krishn  -----------------------
Programmer = Sudhanshu Barnwal
Topic = Binary Search Problem
Purpose = First and last index of target value
Date = 06/12/2023   */

#include <bits/stdc++.h>
using namespace std;

void firstAndLastIdx(int array[], int size, int aim)
{
    int first = -1;
    int last = -1;

    int start = 0;
    int end = size - 1;
    while (start <= end)
    {
        int mid = start + (end - start) / 2;
        if (array[mid] == aim)
        {
            first = mid;
            end = mid - 1;
        }
        else if (array[mid] > aim)
            end = mid - 1;
        else if (array[mid] < aim)
            start = mid + 1;
    }

    start = 0;
    end = size - 1;

    while (start <= end)
    {
        int mid = start + (end - start) / 2;
        if (array[mid] == aim)
        {
            last = mid;
            start = mid + 1;
        }
        else if (array[mid] > aim)
            end = mid - 1;
        else if (array[mid] < aim)
            start = mid + 1;
    }

    cout << "\nFirst : " << first << endl;
    cout << "\nLast : " << last << endl;
}

int main()
{

    int arr[] = {1, 2, 5, 8, 8, 8, 8, 8, 17, 17, 17, 17, 101, 111};

    int size = sizeof(arr) / sizeof(arr[0]);

    cout << "\nArray is { ";

    for (int i = 0; i < size; i++)
    {
        if (i != size - 1)
            cout << arr[i] << " , ";
        else if (i == size - 1)
            cout << arr[i] << " } ";
    }

    int target;
    cout << "\nEnter your target from the above array : ";
    cin >> target;

    firstAndLastIdx(arr, size, target);

    cout << endl;
    return 0;
}