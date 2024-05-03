/*  ----------------------- हरे कृष्ण  -----------------------
Programmer = Sudhanshu Barnwal
Topic = Bubble Sort
Purpose = Increasing Order
Date = 03/12/2023   */

#include <bits/stdc++.h>
using namespace std;

void bubbleSort(int array[], int size)
{
    for (int i = 0; i < size - 1; i++)
    {
        bool flag = true;
        cout << "\n ------> "
             << "Round" << i + 1 << " : " << endl;

        for (int j = 1; j < size - i; j++)
        {
            if (array[j] < array[j - 1])
            {
                flag = false;
                swap(array[j], array[j - 1]);
            }
            for (int k = 0; k < size; k++)
                cout << array[k] << " ";
            cout << endl;
        }
        // If the inner loop didn't happen any swaps, then we are done with that pass. So, after that we have to break this current loop means all work done
        if (flag)
            break;
    }
}

int main()
{

    int arr[] = {7, 4, 8, 5, 3};
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