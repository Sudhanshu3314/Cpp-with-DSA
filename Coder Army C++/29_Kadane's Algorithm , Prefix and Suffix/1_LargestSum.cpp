/*  ----------------------- हरे कृष्ण  -----------------------
Programmer = Sudhanshu Barnwal
Topic = Prefix & Suffix
Purpose =  ( Bruteforce Approach ) Largest Sum in Contiguous Sub Array
Date = 23/12/2023   */

#include <bits/stdc++.h>
using namespace std;

int main()
{

    vector<int> arr{3, 4, -5, 8, -12, 7, 6};

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

    cout << endl;
    int prefix = 0, maxSumSubArray = INT_MIN;
    for (int i = 0; i < size; i++)
    {
        prefix = 0 ;
        for (int j = i; j < size; j++)
        {
            prefix = prefix + arr[j]; // do second time;
            maxSumSubArray = max(maxSumSubArray, prefix);
        }
    }

    cout << endl;
    cout << maxSumSubArray << endl;

    cout << endl;
    return 0;
}