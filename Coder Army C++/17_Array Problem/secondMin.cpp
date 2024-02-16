/*  ----------------------- Hare Krishn  -----------------------
Programmer = Sudhanshu Barnwal
Topic = Questions
Purpose = Second smallest number
Date = 16/02/2024   */

#include <bits/stdc++.h>
using namespace std;

int secondMin(int array[], int size)
{
    int min = INT_MAX;
    for (int i = 0; i < size; i++)
    {
        if (min > array[i])
            min = array[i];
    }

    int secondMin = INT_MAX;
    for (int i = 0; i < size; i++)
    {
        if (secondMin > array[i] && array[i] != min)
            secondMin = array[i];
    }

    return secondMin;
}

int main()
{

    cout << endl;
    int arr[] = {42, 56, 78, 12, 67, 31};

    int size = sizeof(arr) / sizeof(int);

    for (int i = 0; i < size; i++)
    {
        if (i != size - 1)
            cout << arr[i] << ", ";
        else
            cout << arr[i] << " ";
    }

    cout << "Second smallest number : " << secondMin(arr, size) << endl;

    cout << endl;
    return 0;
}