/*  ----------------------- Hare Krishn  -----------------------
Programmer = Sudhanshu Barnwal
Topic = Binary Search Problem
Purpose = First and last index of target value
Date = 06/12/2023   */

#include <bits/stdc++.h>
using namespace std;

vector<int> firstAndLastIdx(int array[], int size, int aim)
{
    int first = -1, last = -1;

    int start = 0;
    int end = size - 1;

    while (start <= end)
    {
        int mid = start + (end - start) / 2;
        if (array[mid] == aim)
        {
            first = mid;
            end = mid - 1;
        }
        else if (array[mid] < aim)
        {
            start = mid + 1;
        }
        else if (array[mid] > aim)
        {
            end = mid - 1;
        }
    }

    start = 0;
    end = size - 1;

    while (start <= end)
    {
        int mid = start + (end - start) / 2;
        if (array[mid] == aim)
        {
            last = mid;
            start = mid + 1;
        }
        else if (array[mid] > aim)
        {
            end = mid - 1;
        }
        else if (array[mid] < aim)
        {
            start = mid + 1;
        }
    }

    vector<int> ans(2);
    ans[0] = first;
    ans[1] = last;

    return ans;
}

int main()
{

    int arr[] = {1, 2, 5, 8, 8, 8, 8, 8, 17, 17, 17, 17, 101, 111};

    int size = sizeof(arr) / sizeof(int);

    cout << "\nArray is { ";
    for (int i = 0; i < size; i++)
    {
        if (i != size - 1)
            cout << arr[i] << ", ";
        else
            cout << arr[i] << " } ";
    }

    cout << endl;
    int target;
    cout << "\nEnter your target : ";
    cin >> target;

    vector<int> res(2);

    res = firstAndLastIdx(arr, size, target);

    cout << "\nFirst Index : " << res[0] << endl;
    cout << "Last Index : " << res[1] << endl;
    return 0;
}