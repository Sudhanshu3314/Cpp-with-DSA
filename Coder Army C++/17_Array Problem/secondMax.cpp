/*  ----------------------- हरे कृष्ण  -----------------------
Programmer = Sudhanshu Barnwal
Topic = Questions
Purpose = Second Max
Date = 16/02/2024   */

#include <bits/stdc++.h>
using namespace std;

int secondMax(int array[], int size)
{
    int max = -1;
    for (int i = 0; i < size; i++)
    {
        if (max < array[i])
            max = array[i];
    }
    int secondMax = -1;
    for (int i = 0; i < size; i++)
    {
        if (secondMax < array[i] && array[i] != max)
            secondMax = array[i];
    }

    return secondMax;
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

    cout << endl;

    cout << "Second Max : " << secondMax(arr, size) << endl;

    cout << endl;
    return 0;
}