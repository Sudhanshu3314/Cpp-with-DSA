/* Programmer = Sudhanshu Barnwal
Topic = Selection sort
Purpose = Using selection sort for sorting the vector in increasing order

Best e.g. for selection sorting
no of elements = 10

10 , 0 , 1 , 9 , 4 , 5 , 7 , 2 , 6 , 8

so, ans is In sorted Order { 0 , 1 , 2 , 4 , 5 , 6 , 7 , 8 , 9 , 10 }

Date = 21/09/2023   */

#include <bits/stdc++.h>
using namespace std;

void selectionSort(vector<int> &v)
{

    int size = v.size();
    int count = 0 ;
    for (int i = 0; i < size - 1; i++)
    {
        

        int min = INT_MAX;
        int minNumIdx = -1;
        for ( int j = i; j < size; j++)
        {
            if (v[j] < min)
            {
                min = v[j];
                minNumIdx = j;
            }
        }
        int temp = v[minNumIdx] ;
        v[minNumIdx] = v[i] ;
        v[i] = temp;
    }

    for (int i = 0; i < size; i++)
    {
        if (i == 0)
        {
            cout << "\n { " << v[i] << " , ";
        }
        if (i != size - 1 && i != 0)
        {
            cout << v[i] << " , ";
        }
        if (i == size - 1)
        {
            cout << v[i] << " } ";
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