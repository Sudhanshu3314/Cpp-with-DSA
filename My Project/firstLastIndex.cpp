/*  ----------------------- Hare Krishn  -----------------------
Programmer = Sudhanshu Barnwal
Topic = Bubble Sort
Purpose =
Date = 16/11/2023   */

#include <bits/stdc++.h>
using namespace std;

void firstLastIndex(int array[], int size, int key)
{

    int first = -1;
    int last = -1;
    int start = 0, end = size - 1;
    while (start <= end)
    {
        int mid = start + (end - start) / 2;
        if (array[mid] == key)
        {
            first = mid;
            end = mid - 1;
        }
        else if (array[mid] < key)
        {
            start = mid + 1;
        }
        else if (array[mid] > key)
        {
            end = mid - 1;
        }
    }

    start = 0, end = size - 1;
    while (start <= end)
    {
        int mid = start + (end - start) / 2;
        if (array[mid] == key)
        {
            last = mid;
            start = mid + 1;
        }
        else if (array[mid] < key)
        {
            start = mid + 1;
        }
        else if (array[mid] > key)
        {
            end = mid - 1;
        }
    }

    cout << "First : " << first << endl;
    cout << "Last : " << last << endl;
    cout << "\nCounted Occurence of " << key << " is " << last - first + 1 << endl;
}

int main()
{

    int arr[16] = {1, 4, 5, 6, 6, 6, 6, 6, 8, 8, 8, 8, 10, 10, 10, 14};

    int size = sizeof(arr) / sizeof(int);

    cout << " {";

    for (int i = 0; i < size; i++)
    {
        if (i != size - 1)
            cout << arr[i] << " , ";
        else
            cout << arr[i] << " } " << endl;
    }
    while (true)
    {
        int target;
        cout << "\nEnter your target : ";
        cin >> target;

        cout << endl;
        firstLastIndex(arr, size, target);

        cout << endl;
    }

    return 0;
}