/*  ----------------------- Hare Krishn  -----------------------
Programmer = Sudhanshu Barnwal
Topic = Questions
Purpose = Reverse Array
Date = 16/02/2024   */

#include <bits/stdc++.h>
using namespace std;

int main()
{

    cout << endl;

    int arr[] = {42, 56, 78, 12, 67, 31};

    int size = sizeof(arr) / sizeof(int);

    int temp[size];

    cout << "Before reverse Array : { ";
    for (int i = 0; i < size; i++)
    {
        if (i != size - 1)
            cout << arr[i] << ", ";
        else
            cout << arr[i] << "} ";
    }

    for (int i = 0; i < size; i++)
        temp[i] = arr[size - i - 1];

    for (int i = 0; i < size; i++)
        arr[i] = temp[i];

    cout << "\n\nAfter reverse Array : { ";
    for (int i = 0; i < size; i++)
    {
        if (i != size - 1)
            cout << arr[i] << ", ";
        else
            cout << arr[i] << "} ";
    }

    return 0;
}