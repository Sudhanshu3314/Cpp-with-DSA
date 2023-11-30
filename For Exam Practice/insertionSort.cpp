/* Programmer = Sudhanshu Barnwal
Topic = Insertion Sort
Purpose = Using Insertion sort for sorting the vector in increasing order

Best e.g. for selection sorting
no of elements = 10

10 , 0 , 1 , 9 , 4 , 5 , 7 , 2 , 6 , 8

so, ans is In sorted Order { 0 , 1 , 2 , 4 , 5 , 6 , 7 , 8 , 9 , 10 }
Date = 20/09/2023   */

#include <bits/stdc++.h>
using namespace std;

void selectionSort(vector<int> &v)
{

    int size = v.size();
    int count = 0;
    for (int i = 1; i < size; i++)
    {
        for (int k = 0; k < size; k++)
        {
            if (k == 0)
            {
                cout << "\n " << ++count << ") ---> { " << v[k] << " , ";
            }
            if (k != 0 && k != size - 1)
            {
                cout << v[k] << " , ";
            }
            if (k == size - 1)
            {
                cout << v[k] << " } ";
            }
        }

        for (int j = i - 1; j >= 0; j--)
        {
            if (v[j] > v[i])
            {
                swap(v[j], v[i]);
            }
            if (v[j] > v[j + 1])
            {
                swap(v[j], v[j + 1]);
            }
        }
    }

    cout << endl;

    for (int k = 0; k < size; k++)
    {
        if (k == 0)
        {
            cout << " ---> { " << v[k] << " , ";
        }
        if (k != 0 && k != size - 1)
        {
            cout << v[k] << " , ";
        }
        if (k == size - 1)
        {
            cout << v[k] << " } ";
        }
    }

    return;
}

int main()
{

    int size;
    cout << "\nEnter size : ";
    cin >> size;

    vector<int> vec(size);
    for (int i = 0; i < size; i++)
    {
        cout << "\nEnter the value of " << i << " index : ";
        cin >> vec[i];
    }

    cout << endl;
    selectionSort(vec);
    cout << endl;
    return 0;
}