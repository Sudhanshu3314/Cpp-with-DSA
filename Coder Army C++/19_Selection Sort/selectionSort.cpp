/*  ----------------------- हरे कृष्ण  -----------------------
Programmer = Sudhanshu Barnwal
Topic = Selection Sort
Purpose = Increasing
Date = 15/02/2024   */

#include <bits/stdc++.h>
using namespace std;

void selectionSort(int array[], int size)
{
    for (int i = 0; i < size - 1; i++)
    {
        int index = i;
        for (int j = i + 1; j < size; j++)
        {
            if (array[index] > array[j])
                index = j;
        }
        swap(array[i], array[index]);
        cout << endl;
        for (int i = 0; i < size; i++)
        {
            // This is for get to know that what happened in Selection sorting
            if (i != size - 1)
                cout << array[i] << ", ";
            else
                cout << array[i] << " ";
        }
    }
}

int main()
{

    cout << endl;
    int size;
    cout << "Enter the size of array : ";
    cin >> size;

    int arr[size];
    for (int i = 0; i < size; i++)
    {
        cout << "Enter the value at " << i << " index : ";
        cin >> arr[i];
    }

    cout << "\nEntered Array is { ";
    for (int i = 0; i < size; i++)
    {
        if (i != size - 1)
            cout << arr[i] << ", ";
        else
            cout << arr[i] << " } ";
    }

    selectionSort(arr, size);

    cout << "\n\nSorted Array is { ";
    for (int i = 0; i < size; i++)
    {
        if (i != size - 1)
            cout << arr[i] << ", ";
        else
            cout << arr[i] << " } ";
    }

    cout << endl;
    return 0;
}