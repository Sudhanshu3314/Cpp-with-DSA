/*  ----------------------- हरे कृष्ण  -----------------------
Programmer = Sudhanshu Barnwal
Topic = Selection Sort
Purpose = Decreasing Order
Date = 15/02/2024   */

#include <bits/stdc++.h>
using namespace std;

void selectionSort(int array[], int size)
{
    for (int i = 0; i < size - 1; i++)
    {
        int index = i;
        cout << endl;
        cout << i + 1 << ") ";

        for (int j = i + 1; j < size; j++)
        {
            if (array[index] < array[j])
                index = j;
        }
        
        for (int k = 0; k < size; k++)
        {
            if (k != size - 1)
                cout << array[k] << ", ";
            else
                cout << array[k] << " ";
        }
        swap(array[index], array[i]);
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

    cout << "\n\nSorted Array in Decreasing Order : { ";
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