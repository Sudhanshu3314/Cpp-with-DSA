/*  ----------------------- Hare Krishn  -----------------------
Programmer = Sudhanshu Barnwal
Topic = Binary Search Problem
Purpose = Search Target Value in Array
Date = 07/12/2023   */

#include <bits/stdc++.h>
using namespace std;

int searchTargetValueIndexInArray(int array[], int size, int aim)
{
    int start = 0;
    int end = size - 1;
    while (start <= end)
    {
        int mid = start + (end - start) / 2;
        if (array[mid] == aim)
            return mid;
        else if (array[mid] > array[0])
        {
            if (array[start] <= aim && array[mid] >= aim)
                end = mid - 1;
            else
                start = mid + 1;
        }
        else
        {
            if (array[end] >= aim && array[mid] <= aim)
                start = mid + 1;
            else
                end = mid - 1;
        }
    }

    return -1;
}

int main()
{

    int arr[] = {6, 7, 8, 10, 1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);

    cout << "\nArray is { ";
    for (int i = 0; i < size; i++)
    {
        if (i != size - 1)
            cout << arr[i] << " , ";
        else if (i == size - 1)
            cout << arr[i] << " } " << endl;
    }

    int target;
    cout << "\nEnter any Target number : ";
    cin >> target;

    cout << "\n "
         << " Your " << target << " target is present at index " << searchTargetValueIndexInArray(arr, size, target) << " in Array " << endl;

    cout << endl;
    return 0;
}