/* Programmer = Sudhanshu Barnwal
Topic =
Purpose =
Date = /08/2023   */

/*
 1 2 3 4 5 6
 1 3 6 10 15 21
 0 1 2 3 4 5 6

*/

#include <bits/stdc++.h>
using namespace std;

void eachEleSumOfArr(vector<int> &array)
{
    for (int i = 1; i < array.size(); i++)
    {
        array[i] += array[i - 1]; // array[i] = array[i] + array[i-1]
    }
}

int main()
{

    int size;
    cout << "\nEnter the size of array : ";
    cin >> size;

    vector<int> arr(size);
    for (int i = 0; i < size; i++)
    {
        cout << "\nEnter the value of " << i << " index : ";
        cin >> arr[i];
    }

    cout << endl;
    cout << "\nEntered value of Array is { ";
    for (int i = 0; i < size; i++)
    {
        if (i != size - 1)
        {
            cout << arr[i] << " , ";
        }
        else if (i == size - 1)
        {
            cout << arr[i] << " }";
        }
    }

    eachEleSumOfArr(arr);

    cout << "\nAfter each element sum of array is { ";
    for (int i = 0; i < size; i++)
    {
        if (i != size - 1)
        {
            cout << arr[i] << " , ";
        }
        else if (i == size - 1)
        {
            cout << arr[i] << " }";
        }
    }

    int q;
    cout << "\nEnter no of queries : ";
    cin >> q;

    while (q--)
    {
        int start, end;
        cout << "\nEnter the start value of array : ";
        cin >> start;
        cout << "\nEnter the End Value Of Array: ";
        cin >> end;

        cout << "\nSum of array from " << start << " to " << end << " is " << (arr[end] - arr[start - 1]) << endl;
    }

    cout << endl;
    return 0;
}