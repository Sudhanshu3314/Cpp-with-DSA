/*  ----------------------- हरे कृष्ण  -----------------------
Programmer = Sudhanshu Barnwal
Topic = Prefix & Suffix
Purpose = Divide Array in Two SubArray with Equal Sum
Date = 29/12/2023   */

#include <bits/stdc++.h>
using namespace std;

int main()
{

    vector<int> arr{3, 4, -2, 5, 8, 20, -10, 8};
    int size = arr.size();

    int sum = 0;
    for (int i = 0; i < size; i++)
        sum += arr[i];

    int prefix = 0;

    for (int i = 0; i < size; i++)
    {
        prefix += arr[i];
        if (prefix == sum - prefix)
        {
            cout << "Done " << prefix << endl;
            goto end;
        }
    }
    cout << "Not Done" << endl;
    end:

    cout << endl;
    return 0;
}