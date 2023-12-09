/*  ----------------------- Hare Krishn  -----------------------
Programmer = Sudhanshu Barnwal
Topic = Binary Search Problem
Purpose = Kth Missing Positive Integer
Date = 07/12/2023   */

#include <bits/stdc++.h>
using namespace std;

int kthMissingPositiveInteger(int array[], int size, int key)
{

    int index = 0, counting = 0;
    int ans;

    for (int i = 1; i < array[size - 1]; i++)
    {
        if (array[index] != i)
        {
            ans = i;
            ++counting;
        }
        else if (array[index] == i)
        {
            index++;
            continue;
        }
        if (counting == key)
            break;
    }

    return ans;
}

int main()
{

    int arr[] = {2, 3, 4, 5, 7, 9, 11, 12, 14, 27};
    int size = sizeof(arr) / sizeof(arr[0]);

    cout << "\nArray is { ";
    for (int i = 0; i < size; i++)
    {
        if (i != size - 1)
            cout << arr[i] << " , ";
        else if (i == size - 1)
            cout << arr[i] << " } " << endl;
    }

    int k;
    cout << "\nEnter kth index missing Positive Integer you want : ";
    cin >> k;

    cout << endl;
    cout << kthMissingPositiveInteger(arr, size, k) << endl;

    cout << endl;
    return 0;
}