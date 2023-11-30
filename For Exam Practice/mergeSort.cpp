/* Programmer = Sudhanshu Barnwal
Topic = Recursion
Purpose =
Date = /09/2023   */

#include <bits/stdc++.h>
using namespace std;

void merge(int arr[], int mid, int leftPtr, int rightPtr)
{
    int an = mid - leftPtr + 1;
    int bn = rightPtr - mid;

    int a[an], b[bn];
    for (int i = 0; i < an; i++)
    {
        a[i] = arr[leftPtr + i];
    }
    for (int j = 0; j < bn; j++)
    {
        b[j] = arr[mid + 1 + j];
    }

    int i = 0;       // index of first subarray
    int j = 0;       // index of second subarray
    int k = leftPtr; // index of resultant merged subarray

    while (i < an && j < bn)
    {
        if (a[i] < b[j])
        {
            arr[k++] = a[i++];
        }
        else
        {
            arr[k++] = b[j++];
        }
    }

    while (i < an)
    {
        arr[k++] = a[i++];
    }
    while (j < bn)
    {
        arr[k++] = b[j++];
    }
}

void mergeSort(int arr[], int leftPtr, int rightPtr)
{

    if (leftPtr == rightPtr)
    {
        return;
    }

    int mid = (leftPtr + rightPtr) / 2;
    int size = 8;
    
    mergeSort(arr, leftPtr, mid);
    for (int i = 0; i < size; i++)
    {
        if (i == 0)
        {
            cout << "\n ---> { " << arr[i] << " , ";
        }
        if (i != 0 && i != size - 1)
        {
            cout << arr[i] << " , ";
        }
        if (i == size - 1)
        {
            cout << arr[i] << " } ";
        }
    }
    mergeSort(arr, mid + 1, rightPtr);
    for (int i = 0; i < size; i++)
    {
        if (i == 0)
        {
            cout << "\n ---> { " << arr[i] << " , ";
        }
        if (i != 0 && i != size - 1)
        {
            cout << arr[i] << " , ";
        }
        if (i == size - 1)
        {
            cout << arr[i] << " } ";
        }
    }

    merge(arr, mid, leftPtr, rightPtr);
    for (int i = 0; i < size; i++)
    {
        if (i == 0)
        {
            cout << "\n ---> { " << arr[i] << " , ";
        }
        if (i != 0 && i != size - 1)
        {
            cout << arr[i] << " , ";
        }
        if (i == size - 1)
        {
            cout << arr[i] << " } ";
        }
    }
}

int main()
{

    // int size;
    // cout << "\nEnter size of array : ";
    // cin >> size;

    // int arr[size];
    // for (int i = 0; i < size; i++)
    // {
    //     cout << "\nEnter the value of " << i << " index : ";
    //     cin >> arr[i];
    // }

    int arr[] = {9, 2, 6, 4, 8, 3, 7, 1};

    cout << endl;
    int leftPtr = 0;
    int rightPtr = (sizeof(arr) / sizeof(int)) - 1;
    mergeSort(arr, leftPtr, rightPtr);

    cout << endl;
    int size = rightPtr + 1;

    for (int i = 0; i < size; i++)
    {
        if (i == 0)
        {
            cout << "---> { " << arr[i] << " , ";
        }
        if (i != 0 && i != size - 1)
        {
            cout << arr[i] << " , ";
        }
        if (i == size - 1)
        {
            cout << arr[i] << " } ";
        }
    }

    cout << endl;
    return 0;
}