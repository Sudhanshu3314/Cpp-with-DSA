/* Programmer = Sudhanshu Barnwal
Topic = Recursion
Purpose =
Date = /09/2023   */

#include <bits/stdc++.h>
using namespace std;

int sumArr(vector<int> &v, int idx)
{
    if (idx == v.size() - 1)
    {
        return v[idx];
    }
    int sum = v[idx] + sumArr(v, idx + 1);
    return sum;
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
    cout << sumArr(vec, 0) << endl;

    cout << endl;
    return 0;
}