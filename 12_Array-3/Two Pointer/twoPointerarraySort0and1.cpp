/* Programmer = Sudhanshu Barnwal
Topic = Two Pointer
Purpose = Sort an Array consisting of only 0's and 1's
Date = 22/07/2023   */

#include <bits/stdc++.h>
using namespace std;

void sortedZerosAndOnes(vector<int> &v)
{

    int left_ptr = 0;
    int right_ptr = v.size() - 1;

    while (left_ptr < right_ptr )
    {
        if (v[left_ptr] == 1 and v[right_ptr] == 0)
        {
            v[left_ptr++] = 0;
            v[right_ptr--] = 1;
        }
        if (v[left_ptr] == 0)
        {
            left_ptr++;
        }
        if (v[right_ptr] == 1)
        {
            right_ptr--;
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

    sortedZerosAndOnes(v);

    for( int ele : v ){
        cout << ele << " " ;
    }

    cout << endl;
    return 0;
}