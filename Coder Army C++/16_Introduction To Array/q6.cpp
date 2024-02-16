/*  ----------------------- Hare Krishn  -----------------------
Programmer = Sudhanshu Barnwal
Topic = Questions
Purpose = Find the third smallest element in an array of unique elements size n. Where n>3.

Date = 17/02/2024   */

#include <bits/stdc++.h>
using namespace std;

int thirdMin(int array[], int size)
{
    int min = INT_MAX;
    for (int i = 0; i < size; i++)
    {
        if (min > array[i])
            min = array[i];
    }

    int SecondMin = INT_MAX;
    for (int i = 0; i < size; i++)
    {
        if (SecondMin > array[i] && min != array[i])
            SecondMin = array[i];
    }

    int thirdMin = INT_MAX;
    for (int i = 0; i < size; i++)
    {
        if (thirdMin > array[i] && SecondMin != array[i] && min != array[i])
            thirdMin = array[i];
    }

    return thirdMin;
}

int main()
{

    cout << endl;
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

    cout << "Third smallest number : " << thirdMin(arr, size) << endl;

    cout << endl;
    return 0;
}