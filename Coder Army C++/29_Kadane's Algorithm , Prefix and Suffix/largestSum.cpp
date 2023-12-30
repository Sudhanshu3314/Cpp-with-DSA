/*  ----------------------- Hare Krishn  -----------------------
Programmer = Sudhanshu Barnwal
Topic = Prefix & Suffix
Purpose = Largest Sum in Contiguous Sub Array
Date = 29/12/2023   */

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

    int maxSumSubArray = INT_MIN;
    int sum;
    cout << endl;
    for (int i = 0; i < size; i++)
    {
        int countSize = i + 1;
        cout << "\n"
             << countSize << " size : { ";
        for (int j = 0; j < size - i; j++)
        {
            cout << " { ";
            sum = 0;

            for (int k = j; k < countSize + j; k++)
            {
                sum += arr[k];
                if (k != countSize + j - 1)
                    cout << arr[k] << " + ";
                else
                    cout << arr[k] << " } = ";
            }

            cout << sum;

            if (j != size - i - 1)
                cout << " , ";

            if (sum > maxSumSubArray)
            {
                maxSumSubArray = sum;
            }
        }

        cout << " } " << endl;
    }

    cout << "\nLargest SUM of Contiguous Sub Array is " << maxSumSubArray << endl;

    cout << endl;
    return 0;
}