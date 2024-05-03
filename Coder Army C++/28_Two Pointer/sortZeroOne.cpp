/*  ----------------------- हरे कृष्ण  -----------------------
Programmer = Sudhanshu Barnwal
Topic = Two Pointer
Purpose = Sort Zero One by Two Pointer Approach
Date = 23/12/2023   */

#include <bits/stdc++.h>
using namespace std;

void sortZeroOne(int array[], int size)
{
    int start = 0, end = size - 1;
    while (start < end)
    {
        if (array[start] == 1 && array[end] == 0)
        {
            swap(array[start], array[end]);
            start++;
            end--;
        }
        if (array[start] == 0)
            start++;
        if (array[end] == 1)
            end--;
    }
}

int main()
{

    int arr[] = {1, 0, 1, 0, 1, 0};
    int size = sizeof(arr) / sizeof(arr[0]);

    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }

    sortZeroOne(arr, size);
    cout << endl;

    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }

    cout << endl;
    return 0;
}