/*  ----------------------- Hare Krishn  -----------------------
Programmer = Sudhanshu Barnwal
Topic = Array and Sub Array
Purpose = Print Sub-array of Array
Date = 23/12/2023   */

#include <bits/stdc++.h>
using namespace std;

int main()
{

    vector<int> arr{4, 3, 7, 2};
    int size = arr.size();

    cout << "\nArray is { ";

    for (int i = 0; i < size; i++)
    {
        if (i != size - 1)
        {
            cout << arr[i] << " , ";
        }
        else
        {
            cout << arr[i] << " } " << endl;
        }
    }

    cout << endl;

    for (int i = 0; i < size; i++)
    {
        cout << i + 1 << " size Sub-array is { ";
        for (int k = 0; k < size - i; k++)
        {
            cout << " { ";
            for (int j = 0; j <= k; j++)
            {
                if (j != k)
                    cout << arr[j] << " , ";
                else
                    cout << arr[j] << " } ";
            }
        }
        cout << " } " << endl;
    }

    cout << endl;
    return 0;
}