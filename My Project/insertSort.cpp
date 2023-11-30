/*  ----------------------- Hare Krishn  -----------------------
Programmer = Sudhanshu Barnwal
Topic =
Purpose =
Date = /11/2023   */

#include <bits/stdc++.h>
using namespace std;

void insertionSortTraverseFromBack(int array[], int size)
{
    cout << endl;
    int count = 0;
    for (int i = size - 2; i >= 0; i--)
    {
        cout << ++count << ") ";
        for (int j = i; j < size - 1; j++)
        {
            if (array[j] > array[j + 1])
            {
                swap(array[j], array[j + 1]);
            }
            else
            {
                cout << " ----- LOOP BREAK ----- " << endl;
                break;
            }
            cout << "{ ";

            for (int i = 0; i < size; i++)
            {
                if (i != size - 1)
                    cout << array[i] << " , ";
                else
                    cout << array[i] << " } " << endl;
            }
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

    insertionSortTraverseFromBack(arr, size);

    cout << "\n After Insertion Sorting i.e. " << endl;

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