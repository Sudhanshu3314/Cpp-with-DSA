/*  ----------------------- Hare Krishn  -----------------------
Programmer = Sudhanshu Barnwal
Topic = Prefix & Suffix
Purpose =  ( Kadane's Algorithm Approach ) Largest Sum in Contiguous Sub Array

Kadane's Algorithm says that wherever prefix sum came negative set into zero and do further process

Date = 23/12/2023   */

#include <bits/stdc++.h>
using namespace std;

int main()
{

    vector<int> arr{3, 4, -5, 8, -12, 7, 6, -2};

    // vector<int> arr{4, -6, 2, 8};

    int size = arr.size();

    cout << "\nArray is { ";
    for (int i = 0; i < size; i++)
    {
        if (i != size - 1)
            cout << arr[i] << " , ";
        else
            cout << arr[i] << " } " << endl;
    }

    int prefixSum = 0;
    int maxSumSubArray = INT_MIN;
    for (int i = 0; i < size; i++)
    {
        prefixSum += arr[i];
        maxSumSubArray = max(prefixSum, maxSumSubArray);

        if (prefixSum < 0)
            prefixSum = 0;
    }
    cout << endl;
    cout << maxSumSubArray << endl;

    cout << endl;
    return 0;
}