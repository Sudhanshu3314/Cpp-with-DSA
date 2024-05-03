/*  ----------------------- हरे कृष्ण  -----------------------
Programmer = Sudhanshu Barnwal
Topic = Introduction to Array
Purpose = Sum Of Elements
Date = 08/12/2023   */

#include <bits/stdc++.h>
using namespace std;

int main()
{

    int arr[] = {
        13,
        45,
        67,
        13,
        13,
        78,
        12,
        4,
        11,
        78,
        34,
        13,
        67,
        89,
        11,
        2,
        67,
        98,
        1,
        9,
    };

    int size = sizeof(arr) / sizeof(arr[0]);
    int sum = 0; // This initializes with zero bcoz this will add the value of array

    for (int i = 0; i < size; i++)
    {
        sum += arr[i];
    }

    cout << "\n Sum of array is " << sum << endl;

    cout << endl;
    return 0;
}