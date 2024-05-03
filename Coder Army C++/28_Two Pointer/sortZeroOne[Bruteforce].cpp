/*  ----------------------- हरे कृष्ण  -----------------------
Programmer = Sudhanshu Barnwal
Topic = Two Pointer
Purpose = Sort Zero One by Bruteforce Approach
Date = 23/12/2023   */

#include <bits/stdc++.h>
using namespace std;

int main()
{

    int arr[] = {1, 0, 1, 0, 1, 0};
    int size = sizeof(arr) / sizeof(arr[0]);

    int countZero = 0;

    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
        if (arr[i] == 0)
            countZero++;
    }

    for (int i = 0; i < size; i++)
    {
        if (i < countZero)
        {
            arr[i] = 0;
        }
        else
        {
            arr[i] = 1;
        }
    }
    cout << endl ;
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }

    cout << endl;
    return 0;
}