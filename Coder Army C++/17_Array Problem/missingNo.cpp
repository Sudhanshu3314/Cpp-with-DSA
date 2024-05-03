/*  ----------------------- हरे कृष्ण  -----------------------
Programmer = Sudhanshu Barnwal
Topic = Questions
Purpose = Missing Number from an Array
Date = 16/02/2024   */

#include <bits/stdc++.h>
using namespace std;

int main()
{

    cout << endl;
    int arr[] = {2, 3, 4, 6, 7, 8, 9};

    int size = sizeof(arr) / sizeof(int);

    int sum = 0;
    int max = INT_MIN;
    int min = INT_MAX;

    for (int i = 0; i < size; i++)
    {
        sum = sum + arr[i];
        if (max < arr[i])
            max = arr[i];

        if (min > arr[i])
            min = arr[i];
    }

    int n = max - min + 1;

    int total = (n) * (max + min) / 2;

    int missingNo = total - sum;

    cout << "Missing Number : " << missingNo << endl;
    return 0;
}