/*  ----------------------- हरे कृष्ण  -----------------------
Programmer = Sudhanshu Barnwal
Topic = Selection Sort
Purpose = Increasing Order
Date = 03/12/2023   */

#include <bits/stdc++.h>
using namespace std;

void selectionSort(int array[], int size)
{
    for (int i = 0; i < size - 1; i++)
    {
        int index = i;
        for (int j = i + 1; j < size; j++)
        {
            if (array[j] < array[index])
            {
                index = j;
            }
        }
        swap(array[index], array[i]);
        for (int i = 0; i < size; ++i)
        {
            cout << array[i] << " ";
        }
        cout << endl;
    }
}

int main()
{

    int arr[] = {9, 7, 3, 1, 6};
    int size = sizeof(arr) / sizeof(arr[0]);

    cout << "\n Original array : { ";
    for (int i = 0; i < size; ++i)
    {
        if (i != size - 1)
        {
            cout << arr[i] << " , ";
        }
        else if (i == size - 1)
        {
            cout << arr[i] << " } ";
        }
    }

    cout << endl;

    selectionSort(arr, size);

    cout << "\n Sorted array in Decreasing Order : { ";
    for (int i = 0; i < size; ++i)
    {
        if (i != size - 1)
        {
            cout << arr[i] << " , ";
        }
        else if (i == size - 1)
        {
            cout << arr[i] << " } ";
        }
    }
    cout << endl;
    return 0;
}