/* Programmer = Sudhanshu Barnwal
Purpose = Do the numbers in ascending and Descending Order
Date = 09/01/2023   */

#include <bits/stdc++.h>
using namespace std;

int main()
{

    int size;
    cout << "\n Enter that how many number do you want :- ";
    cin >> size;

    int arr[size];
    for (int i = 0; i < size; i++)
    {
        cout << "\n Enter the value of " << i + 1 << " index :- ";
        cin >> arr[i];
    }

    for (int i = 0; i < size; i++)
    {
        int temp;
        for (int j = i + 1; j < size; j++)
        {
            if (arr[i] > arr[j])
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    cout << "\n -----> Numbers in Ascending Order is { ";
    for (int i = 0; i < size; i++)
    {
        if (i != size - 1)
            cout << arr[i] << ", ";
        else
            cout << arr[i] << "} ";
    }

    cout << "\n -----> Numbers in Descending Order is { ";
    for (int i = 0; i < size; i++)
    {
        if (i != size - 1)
            cout << arr[size - i - 1] << ", ";
        else
            cout << arr[size - i - 1] << "} ";
    }

    cout << endl;
    return 0;
}