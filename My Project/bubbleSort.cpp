/*  ----------------------- Hare Krishn  -----------------------
Programmer = Sudhanshu Barnwal
Topic = Bubble Sort
Purpose = Increasing bubble sort from starting traverse
Date = 16/11/2023   */

#include <bits/stdc++.h>
using namespace std;

void bubbleSort(int array[], int size)
{
    cout << endl;
    int count = 0;
    for (int i = 0; i < size - 1; i++)
    {
        cout << ++count << ") ";
        bool flag = true;
        for (int j = 0; j < size - i - 1; j++)
        {
            if (array[j] > array[j + 1])
            {
                swap(array[j], array[j + 1]);
                flag = false;
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
        if (flag)
        {
            cout << " ------- LOOP BREAK ----------- " << endl;
            break;
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

    bubbleSort(arr, size);

    cout << "\n After Bubble Sorting i.e. " << endl;

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