/*  ----------------------- हरे कृष्ण  -----------------------
Programmer = Sudhanshu Barnwal
Topic = Questions
Purpose = Reverse Array
Date = 16/02/2024   */

#include <bits/stdc++.h>
using namespace std;

int main()
{

    cout << endl;
    int arr[] = {42, 56, 78, 12, 67, 31};

    int size = sizeof(arr) / sizeof(int);

    int i = 0;
    int j = size - 1;

    while (i < j)
    {
        swap(arr[i], arr[j]);
        i++;
        j--;
    }

    for (int i = 0; i < size; i++)
    {
        if( i != size -1 )
        cout << arr[i] << ", ";
        else
        cout << arr[i] << " ";
    }
    

    cout << endl;
    return 0;
}