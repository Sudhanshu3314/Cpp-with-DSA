/*  ----------------------- हरे कृष्ण  -----------------------
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
        int countSize = i + 1;
        cout << "\n " << countSize << " size Array is {";

        for (int j = 0; j < size - i; j++)
        {

            cout << " { ";
            for (int k = j; k < j + countSize; k++)
            {
                if (k != j + countSize - 1)
                    cout << arr[k] << " , ";
                else
                    cout << arr[k] << " } ";
            }
            if( j != size - i - 1) {
                cout << "," ;
            }
        }

        cout << "} " << endl;
    }

    cout << endl;
    return 0;
}