/* Programmer = Sudhanshu Barnwal
Topic = Quick Sort Algorithm
Purpose =
Date = /09/2023   */

#include <bits/stdc++.h>
using namespace std;

int pivotElementIdx(vector<int> &v, int first, int last)
{
    int pivotElement = v[last];
    int insertValueAtIdx = first - 1; // this pointer is for inserting elements < pivot element

    for (int j = first; j < last; j++) // j pointer is for finding elements < pivot element
    {
        if (v[j] < pivotElement)
        {
            insertValueAtIdx++;
            swap(v[insertValueAtIdx], v[j]);
        }
    }
    // now insertValueAtIdx is pointing to the last element < pivot element
    // correct position for pivot will be - insertValueAtIdx + 1
    swap(v[insertValueAtIdx + 1], v[last]);

    return insertValueAtIdx + 1;
}

void quickSort(vector<int> &v, int first, int last)
{
    // base case
    if (first >= last)
        return;

    // recursive case
    int pivotIndex = pivotElementIdx(v, first, last);

    quickSort(v, first, pivotIndex - 1); // subtraction happen bcoz i want prior element of pivot element
    quickSort(v, pivotIndex + 1, last);  // addition happen bcoz i want next element of pivot element
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

    int firstIdx = 0;
    int lastIdx = size - 1;

    quickSort(vec, firstIdx, lastIdx);
    for (int i = 0; i < vec.size(); i++)
    {
        cout << vec[i] << " ";
    }

    cout << endl;

    cout << endl;
    return 0;
}