/*  ----------------------- हरे कृष्ण  -----------------------
Programmer = Sudhanshu Barnwal
Topic = Binary Search Problem
Purpose = Kth Missing Positive Integer
Date = 07/12/2023   */

#include <bits/stdc++.h>
using namespace std;

int kthMissingPositiveInteger(int array[], int size, int key)
{
    int start = 0;
    int end = size - 1;
    int ans;
    while (start <= end)
    {
        int mid = start + (end - start) / 2;
        if (array[mid] - mid - 1 <= key)
            start = mid + 1;
        else
        {
            ans = mid;
            end = mid - 1;
        }
    }

    return (ans + key);
}

int main()
{

    int arr[] = {2, 3, 4, 5, 7, 9, 11, 12, 14, 27};
    int size = sizeof(arr) / sizeof(arr[0]);

    cout << "\nArray is { ";
    for (int i = 0; i < size; i++)
    {
        if (i != size - 1)
            cout << arr[i] << " , ";
        else if (i == size - 1)
            cout << arr[i] << " } " << endl;
    }

    int k;
    cout << "\nEnter kth index missing Positive Integer you want : ";
    cin >> k;

    cout << endl;

    cout << kthMissingPositiveInteger(arr, size, k) << endl;

    cout << endl;
    return 0;
}