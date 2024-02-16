/*  ----------------------- Hare Krishn  -----------------------
Programmer = Sudhanshu Barnwal
Topic = Selection Sort
Purpose = Increasing Order
Date = 15/02/2024   */

#include <bits/stdc++.h>
using namespace std;

void InsertionSort(int array[], int size)
{
    for (int i = 0; i < size - 1; i++)
    {
        cout << endl;
        cout << i + 1 << ") ";

        for (int j = i + 1; j > 0; j--)
        {
            if (array[j - 1] > array[j])
                swap(array[j - 1], array[j]);
            else
            {
                cout << "There is No Swap Happen. So, that's Why this round is breaked.\n";
                break;
            }

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

    InsertionSort(arr, size);

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