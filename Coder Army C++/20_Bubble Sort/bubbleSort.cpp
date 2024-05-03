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
        cout << endl;
        cout << i + 1 << ") ";

        for (int j = 1; j < size - i; j++)
        {
            if (array[j - 1] > array[j])
            {
                flag = false;
                swap(array[j - 1], array[j]);
            }

            cout << " -----------> ";
            for (int k = 0; k < size; k++)
            {
                if (k != size - 1)
                    cout << array[k] << ", ";
                else
                    cout << array[k] << " ";
            }
            cout << endl;
        }

        if (flag)
            break;
    }
}

int main()
{

    int size;
    cout << "\nEnter the size of array : ";
    cin >> size;

    int arr[size];
    cout << endl;

    for (int i = 0; i < size; i++)
    {
        cout << "Enter the value at " << i << " index : ";
        cin >> arr[i];
    }

    cout << "\n Entered Array : { ";
    for (int i = 0; i < size; i++)
    {
        if (i != size - 1)
            cout << arr[i] << " , ";
        else if (i == size - 1)
            cout << arr[i] << " } ";
    }

    cout << endl;
    bubbleSort(arr, size);

    cout << "\n\n Sorted Array : { ";
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