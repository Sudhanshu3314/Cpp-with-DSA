/*  ----------------------- Hare Krishn  -----------------------
Programmer = Sudhanshu Barnwal
Topic = Insertion Sort
Purpose = Increasing Order
Date = 03/12/2023   */

#include <bits/stdc++.h>
using namespace std;

void insertionSort(int array[], int size)
{
    for (int i = 1; i < size; i++)
    {
        cout << "\n ---> Round " << i << " : " << endl;
        for (int j = i; j >= 1; j--)
        {
            if (array[j] < array[j - 1])
                swap(array[j], array[j - 1]);
            else
            {
                cout << "\n There is No Swap Happen. So, that's Why this round is breaked.\n";
                break;
            }

            for (int k = 0; k < size; k++)
                cout << array[k] << " ";

            cout << endl;
        }
    }
}

int main()
{

    int arr[] = {9, 7, 13, 17, 12, 1, 10};
    int size = sizeof(arr) / sizeof(arr[0]);

    cout << "\nOriginal Array : { ";
    for (int i = 0; i < size; i++)
    {
        if (i != size - 1)
            cout << arr[i] << " , ";
        else if (i == size - 1)
            cout << arr[i] << " } ";
    }

    cout << endl;

    insertionSort(arr, size);

    cout << "\nSorted Array : { ";
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