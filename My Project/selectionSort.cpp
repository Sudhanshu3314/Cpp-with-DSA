/*  ----------------------- Hare Krishn  -----------------------
Programmer = Sudhanshu Barnwal
Topic = Selection Sort
Purpose =
Date = 16/11/2023   */

#include <bits/stdc++.h>
using namespace std;

void selectionSort(int array[], int size)
{
    cout << endl;
    int count = 0;
    for (int i = 0; i < size - 1; i++)
    {
        cout << ++count << ") ";
        int index = i;
        for (int j = 0; j < size-i; j++)
        {
            if (array[j] > array[index])
            {
                index = j;
            }
        }
        swap(array[i], array[index]);
        cout << "{ ";

        for (int i = 0; i < size; i++)
        {
            if (i != size - 1)
                cout << array[i] << " , ";
            else
                cout << array[i] << " } ";
        }
        cout << endl;
    }
}

int main()
{

    int arr[10] = {12, 4, 6, 1, 67, 42, 5, 3, 9, 2};

    int size = sizeof(arr) / sizeof(int);

    cout << "{ ";

    for (int i = 0; i < size; i++)
    {
        if (i != size - 1)
            cout << arr[i] << " , ";
        else
            cout << arr[i] << " } ";
    }

    selectionSort(arr, size);

    cout << "\n After Selection Sorting i.e. " << endl;

    cout << "{ ";

    for (int i = 0; i < size; i++)
    {
        if (i != size - 1)
            cout << arr[i] << " , ";
        else
            cout << arr[i] << " } ";
    }

    cout << endl;
    return 0;
}