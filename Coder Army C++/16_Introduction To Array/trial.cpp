/*  ----------------------- Hare Krishn  -----------------------
Programmer = Sudhanshu Barnwal
Topic = Introduction to Array
Purpose =
Date = 09/12/2023   */

#include <bits/stdc++.h>
using namespace std;

void segregateElements(int arr[], int n)
{
    // Your code goes here

    int res[n];
    int j = 0;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] >= 0)
        {
            res[j++] = arr[i];
        }
    }

    for (int i = 0; i < n; i++)
    {
        if (arr[i] < 0)
            res[j++] = arr[i];
    }

    for (int i = 0; i < n; i++)
    {
        cout << res[i] << " ";
    }
}

int main()
{

    int arr[] = {-5, 7, -3, -4, 9, 10, -1, 11};
    segregateElements(arr, sizeof(arr) / sizeof(arr[0]));

    cout << endl;
    return 0;
}