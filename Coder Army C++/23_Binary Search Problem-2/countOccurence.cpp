/*  ----------------------- Hare Krishn  -----------------------
Programmer = Sudhanshu Barnwal
Topic = Binary Search Problem
Purpose =
Date = 06/12/2023   */

#include <bits/stdc++.h>
using namespace std;

int countOccurence(int array[], int size, int aim)
{
    int start = 0;
    int end = size - 1;
    int first = -1;
    int last = -1;
    while (start <= end)
    {
        int mid = start + (end - start) / 2;
        if (array[mid] == aim)
        {
            first = mid;
            end = mid - 1;
        }
        else if (array[mid] < aim)
            start = mid + 1;
        else if (array[mid] > aim)
            end = mid - 1;
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
            end = mid - 1;
        else if (array[mid] < aim)
            start = mid + 1;
    }

    return (last - first + 1);
}

int main()
{

    int arr[] = {1, 2, 5, 8, 8, 8, 8, 8, 17, 17, 17, 17, 101, 111};

    int size = sizeof(arr) / sizeof(arr[0]);

    cout << "\n Array is { ";
    for (int i = 0; i < size; i++)
    {
        if (i != size - 1)
            cout << arr[i] << " , ";
        else if (i == size - 1)
            cout << arr[i] << " } ";
    }

    int target;
    cout << "\nEnter any number from above array : ";
    cin >> target;

    cout << "\nCount Occurence of " << target << " is " << countOccurence(arr, size, target) << " times." << endl;

    cout << endl;
    return 0;
}