/*  ----------------------- हरे कृष्ण  -----------------------
Programmer = Sudhanshu Barnwal
Topic = Introduction to Array
Purpose =
Date = 08/12/2023   */

#include <bits/stdc++.h>
using namespace std;

int main()
{

    int size;
    cout << "\nEnter the size of array : ";
    cin >> size;

    int arr[size];
    for (int i = 0; i < size; i++)
    {
        cout << "\nEnter the value of " << i << " index : ";
        cin >> arr[i];
    }

    cout << endl;
    cout << "Your Entered array is { ";
    for (int i = 0; i < size; i++)
    {
        if (i != size - 1)
            cout << arr[i] << " , ";
        else if (i == size - 1)
            cout << arr[i] << " } " << endl;
    }

    int target;
    cout << "\nEnter your target : ";
    cin >> target;

    int index = -1;

    for (int i = 0; i < size; i++)
    {
        if (arr[i] == target)
            index = i;
    }
    cout << endl;
    cout << "Your enter target found at index " << index << endl;

    cout << endl;
    return 0;
}