/*  ----------------------- हरे कृष्ण  -----------------------
Programmer = Sudhanshu Barnwal
Topic = Bubble Sort
Purpose = Decreasing Order
Date = 15/02/2024   */

#include <bits/stdc++.h>
using namespace std;

void BubbleSort(int array[], int size)
{
    for (int i = 0; i < size - 1; i++)
    {
        cout << endl;
        cout << i + 1 << ") ";
        for (int j = 1; j < size - i; j++)
        {
            if (array[j - 1] < array[j])
            {
                swap(array[j - 1], array[j]);
            }
            cout << " -----> ";
            for (int k = 0; k < size; k++)
            {
                if (k != size - 1)
                    cout << array[k] << ", ";
                else
                    cout << array[k] << " ";
            }

            cout << endl;
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
    cout << endl;
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

    BubbleSort(arr, size);

    cout << "\n\nSorted Array in Decreasing Order is { ";
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