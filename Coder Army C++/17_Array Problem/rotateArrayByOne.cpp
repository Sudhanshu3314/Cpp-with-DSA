/*  ----------------------- हरे कृष्ण  -----------------------
Programmer = Sudhanshu Barnwal
Topic = Questions
Purpose = Rotate Array By One
Date = 16/02/2024   */

#include <bits/stdc++.h>
using namespace std;

int main()
{

    cout << endl;
    int arr[] = {42, 56, 78, 12, 67, 31};

    int size = sizeof(arr) / sizeof(int);

    for (int i = 0; i < size; i++)
    {
        if (i != size - 1)
            cout << arr[i] << ", ";
        else
            cout << arr[i] << " ";
    }

    cout << endl;
    int temp = arr[size - 1];

    for (int i = size - 1; i >= 1; i--)
    {
        arr[i] = arr[i - 1];
    }

    arr[0] = temp;

    cout << "After Rotation of Array By One : { ";

    for (int i = 0; i < size; i++)
    {
        if (i != size - 1)
            cout << arr[i] << ", ";
        else
            cout << arr[i] << " } ";
    }

    cout << endl;
    return 0;
}