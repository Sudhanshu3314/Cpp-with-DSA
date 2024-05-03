/*  ----------------------- हरे कृष्ण  -----------------------
Programmer = Sudhanshu Barnwal
Topic = Binary Search Problem
Purpose = Search Insert Position
Date = 06/12/2023   */

#include <bits/stdc++.h>
using namespace std;

int searchInsertPosition(int array[], int size, int aim)
{
    int index = size;
    int start = 0;
    int end = size - 1;

    while (start <= end)
    {
        int mid = start + (end - start) / 2;
        if (array[mid] == aim)
        {
            index = mid;
            break;
        }
        else if (array[mid] < aim)
        {
            start = mid + 1;
        }
        else if (array[mid] > aim)
        {
            index = mid;
            end = mid - 1;
        }
    }

    return index;
}

int main()
{

    int arr[] = {1, 2, 5, 7, 10, 13, 17};
    int size = sizeof(arr) / sizeof(arr[0]);

    cout << "\n Array is { ";

    for (int i = 0; i < size; i++)
    {
        if (i != size - 1)
            cout << arr[i] << " , ";
        else if (i == size - 1)
            cout << arr[i] << " } ";
    }

    cout << endl << endl ;

    int target;
    cout << "Enter your target : ";
    cin >> target;

    // target = 20
    // target = 8;
    // target = -1;

    cout << target << " can be inserted at index i.e. " << searchInsertPosition(arr, size, target) << endl;

    cout << endl;
    return 0;
}