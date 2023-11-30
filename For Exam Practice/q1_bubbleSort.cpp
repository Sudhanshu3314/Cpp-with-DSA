/* Programmer = Sudhanshu Barnwal
Topic = Bubble Sort
Purpose = Given an array arr, move all 0's to the end of it while maintaining the relative order of the non-zero elements

Note : that you must do this in place without making a copy of the array

input : 0 5 0 3 42
Output : 5 3 42 0 0
Date = /09/2023   */

#include <bits/stdc++.h>
using namespace std;

void printZeroLast(vector<int> &v)
{
    int size = v.size() - 1;
    for (int i = 0; i <= size; i++)
    {
        bool flag = true;
        cout << endl;
        
        for (int j = 1; j <= size - i; j++)
        {
            if (v[j - 1] == 0 && v[j] != 0)
            {
                swap(v[j], v[j - 1]);
                flag = false;
            }
        }
        if (false)
        {
            break;
        }
    }

    cout << endl;
    for (int i = 0; i <= size; i++)
    {
        cout << v[i] << " ";
    }
}

int main()
{

    int size;
    cout << "\n Enter size : ";
    cin >> size;

    vector<int> vec(size);
    for (int i = 0; i < size; i++)
    {
        cout << "\nEnter the value of " << i << " index : ";
        cin >> vec[i];
    }

    printZeroLast(vec);

    cout << endl;
    return 0;
}