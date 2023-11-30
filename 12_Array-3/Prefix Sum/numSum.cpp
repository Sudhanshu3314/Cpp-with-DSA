/* Programmer = Sudhanshu Barnwal
Topic = Prefix Sum
Purpose = Given an integers array 'a' return the prefix sum/running sum in the same array without creating a new array
Date = 23/07/2023   */

#include <bits/stdc++.h>
using namespace std;

void eachEleSumOfArr(vector<int> &vect)
{
    // Initialize sum variable with first element in array as it is already included by prefixsum formula
    for (int i = 0; i < vect.size(); i++)
    {
        vect[i + 1] = vect[i + 1] + vect[i];
        cout << vect[i] << " ";
    }
}

int main()
{

    int size;
    cout << "\nEnter that how many values do you want to type : ";
    cin >> size;

    vector<int> vec;

    for (int i = 0; i < size; i++)
    {
        int ele;
        cout << "\nEnter the value of " << i << " index : ";
        cin >> ele;
        vec.push_back(ele);
    }

    eachEleSumOfArr(vec);

    cout << endl;
    return 0;
}