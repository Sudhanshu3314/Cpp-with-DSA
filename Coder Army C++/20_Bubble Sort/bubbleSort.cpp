/*  ----------------------- Hare Krishn  -----------------------
Programmer = Sudhanshu Barnwal
Topic = Bubble Sort
Purpose = Increasing Order
Date = 03/12/2023   */

#include <bits/stdc++.h>
using namespace std;

void bubbleSort(int array[], int size)
{
    for (int i = 0; i < size; i++)
    {
        /* code */
    }
    
}

int main()
{

    int arr[] = {6, 9, 8, 5, 7, 3, 1};
    int size = sizeof(arr) / sizeof(arr[0]);

    cout << "\n Original Array : { ";
    for (int i = 0; i < size; i++)
    {
        if (i != size - 1)
            cout << arr[i] << " , ";
        else if (i == size - 1)
            cout << arr[i] << " } ";
    }

    cout << endl;
    bubbleSort(arr, size);

    cout << "\n Sorted Array : { ";
    for (int i = 0; i < size; i++)
    {
        if (i != size - 1)
            cout << arr[i] << " , ";
        else if (i == size - 1)
            cout << arr[i] << " } ";
    }
    cout << endl;
    return 0;
}