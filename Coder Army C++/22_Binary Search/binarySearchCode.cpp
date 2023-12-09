/*  ----------------------- Hare Krishn  -----------------------
Programmer = Sudhanshu Barnwal
Topic = Binary Search Problem
Purpose = Linear Search Using Binary Search for reducing time complexity of code from O(N) to O(LogN)
Date = 07/12/2023   */

#include <bits/stdc++.h>
using namespace std;

int binarySearch(int array[], int size, int aim)
{

    int start = 0;
    int end = size - 1;
    while (start <= end)
    {
        int mid = start + (end - start) / 2;
        if (array[mid] == aim)
            return mid;
        else if (array[mid] > aim)
            end = mid - 1;
        else
        start = mid + 1 ;
    }

    return -1;
}

int main()
{

    int arr[] = {4, 7, 21, 78, 101, 120, 141, 192};
    int size = sizeof(arr) / sizeof(arr[0]);

    cout << "\nArray is { ";

    for (int i = 0; i < size; i++)
    {
        if (i != size - 1)
            cout << arr[i] << " , ";
        else
            cout << arr[i] << " } " << endl;
    }

    cout << endl;
    int target;
    cout << "\nEnter your target : ";
    cin >> target;
    cout << endl;

    cout << "Your " << target << " target is located at index " << binarySearch(arr, size, target);

    cout << endl;
    return 0;
}