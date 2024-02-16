/*  ----------------------- Hare Krishn  -----------------------
Programmer = Sudhanshu Barnwal
Topic = Questions
Purpose = Linear Search
Date = 16/02/2024   */

#include <bits/stdc++.h>
using namespace std;

int main()
{

    cout << endl;
    int arr[] = {42, 56, 78, 12, 67, 31};
    int size = sizeof(arr) / sizeof(arr[0]);

    int key;
    cout << "Enter size : ";
    cin >> key;

    int index = -1;

    for (int i = 0; i < size; i++)
    {
        if (arr[i] == key)
        {
            index = i;
            break;
        }
    }

    cout << index << endl;

    cout << endl;
    return 0;
}