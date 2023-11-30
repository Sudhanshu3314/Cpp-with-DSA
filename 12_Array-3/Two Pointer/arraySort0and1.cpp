/* Programmer = Sudhanshu Barnwal
Topic = Simple Approach
Purpose = Sort an Array consisting of only 0's and 1's
Date = 22/07/2023   */

#include <bits/stdc++.h>
using namespace std;

void sortedZerosAndOnes(vector<int> &v, int size)
{
    int zeroCount = 0;
    for (int ele : v)
    {
        if (ele == 0)
        {
            zeroCount++;
        }
    }
    for (int i = 0; i < size; i++)
    {
        if (i < zeroCount)
        {
            v[i] = 0;
        }
        else if (i >= zeroCount)
        {
            v[i] = 1;
        }
    }
}

int main()
{

    int size;
    cout << "\nEnter that how many number do you want to type : ";
    cin >> size;

    vector<int> v(size);
    for (int i = 0; i < size; i++)
    {
        cout << "\nEnter the value of " << i << " index : ";
        cin >> v[i];
    }

    sortedZerosAndOnes(v, size);

    for (int i = 0; i < size; i++)
    {
        cout << v[i] << " " ;
    }
    

    cout << endl;
    return 0;
}