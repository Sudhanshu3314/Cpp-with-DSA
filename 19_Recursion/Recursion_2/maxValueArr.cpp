/* Programmer = Sudhanshu Barnwal
Topic = Recursion
Purpose = Maximum value from array by recursion method
Date = 20/09/2023   */

#include <bits/stdc++.h>
using namespace std;

int maxValueFromArr(int *arr, int length, int idx)
{
    if (idx == length - 1)
    {
        return arr[idx];
    }

    return max(arr[idx], maxValueFromArr(arr, length, idx + 1));
}

int main()
{

    int arr[] = {43, 56, 24, 74, 1, 68, 13};
    int len = sizeof(arr) / sizeof(int);
    int value = maxValueFromArr(arr, len, 0);

    cout << value << endl;
    return 0;
}