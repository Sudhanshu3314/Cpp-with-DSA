/*  ----------------------- हरे कृष्ण  -----------------------
Programmer = Sudhanshu Barnwal
Topic = Prefix And Suffix
Purpose = To Print Prefix and Suffix
Date = 23/12/2023   */

#include <bits/stdc++.h>
using namespace std;

int main()
{

    vector<int> arr{6, 4, 5, -3, 2, 8};
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

    vector<int> prefix(size);
    prefix[0] = arr[0];
    vector<int> suffix(size);
    suffix[size - 1] = arr[size - 1];

    for (int i = 1; i < size; i++)
    {
        prefix[i] = prefix[i - 1] + arr[i];
        suffix[size - i - 1] = suffix[size - i] + arr[size - i - 1];
    }

    cout << endl;

    cout << "Prefix array is { ";
    for (int i = 0; i < size; i++)
    {
        if (i != size - 1)
        {
            cout << prefix[i] << " , ";
        }
        else
        {
            cout << prefix[i] << " } " << endl;
        }
    }

    cout << "\nSuffix array is { ";
    for (int i = 0; i < size; i++)
    {
        if (i != size - 1)
        {
            cout << suffix[i] << " , ";
        }
        else
        {
            cout << suffix[i] << " } " << endl;
        }
    }

    cout << endl;
    return 0;
}