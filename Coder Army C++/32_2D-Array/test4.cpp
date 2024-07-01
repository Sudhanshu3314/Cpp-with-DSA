/*  ----------------------- हरे कृष्ण  -----------------------
Programmer = Sudhanshu Barnwal
Topic = 2D Array
Purpose =
Date = 17/05/2024   */

#include <bits/stdc++.h>
using namespace std;

int main()
{

    cout << endl;

    vector<int> arr{3, 4, -1, 1};
    int size = arr.size();

    int min = INT_MAX;

    for (int i = 0; i < size; i++)
    {
        if (arr[i] < 1)
            arr[i] = 0;
        else if (arr[i] > 0 && min > arr[i])
            min = arr[i];
    }
    // Print
    for (int i = 0; i < size; i++)
        cout << arr[i] << " ";
    cout << endl;

    for (int i = 0; i < size; i++)
    {
        if (arr[i] != 0)
            arr[i] = arr[i] - min + 1;
    }

    int max = INT_MIN;
    for (int i = 0; i < size; i++)
    {
        if (max < arr[i] && arr[i] <= size)
            max = arr[i];
    }

    int value = max + 1;

    // Print
    for (int i = 0; i < size; i++)
        cout << arr[i] << " ";
    cout << endl;

    for (int i = 0; i < size; i++)
    {
        if (arr[i] != 0 && arr[i] % value != 0)
            arr[(arr[i] % value) - 1] = (arr[i] % value) * value + arr[(arr[i] % value) - 1];
    }

    // Print
    for (int i = 0; i < size; i++)
        cout << arr[i] << " ";
    cout << endl;

    cout << value << endl;

    for (int i = 0; i < size; i++)
        arr[i] = arr[i] / value;

    // Print
    for (int i = 0; i < size; i++)
        cout << arr[i] << " ";
    cout << endl;

    for (int i = 0; i < size; i++)
    {
        arr[i] = arr[i] + (value - 1);
    }

    // Print
    for (int i = 0; i < size; i++)
        cout << arr[i] << " ";
    cout << endl;

    cout << endl;
    return 0;
}