/* Programmer = Sudhanshu Barnwal
Topic = Prefix Sum
Purpose = Check if we can partition the array into two subarrays with equal sum.More Formally , Check that the prefix sum of a part of the array is equal to the suffix sum of rest of the array
Date = 23/07/2023   */

#include <bits/stdc++.h>
using namespace std;

/*  bool prefixAndSuffixComputation(vector<int> &vect)
{
    int total_sum = 0;
    for (int i = 0; i < vect.size(); i++)
    {
        total_sum += vect[i];
    }

    int prefixSum = 0;

    for (int i = 0; i < vect.size(); i++)
    {
        prefixSum += vect[i];
        int suffixSum = total_sum - prefixSum;

        if (prefixSum == suffixSum)
        {
            return true;
        }
    }
    return false;
}   */

// 2 3 4 7 9 2 5
// 0 1 2 3 4 5 6

void prefixAndSuffixComputation(vector<int> &v)
{
    int totalSum = 0;
    for (int i = 0; i < v.size(); i++)
    {
        totalSum += v[i];
    }
    int prefixSum = 0;
    int seperate = -1;
    for (int i = 0; i < v.size(); i++)
    {
        prefixSum += v[i];
        int suffixSum = totalSum - prefixSum;
        if (prefixSum == suffixSum)
        {
            seperate = i;
            break;
        }
    }

    if (seperate == -1)
    {
        cout << "\nNone of any group of Prefix Sum and Suffix is NOT Equal." << endl;
    }
    if (seperate != -1)
    {
        for (int i = 0; i <= seperate; i++)
        {
            if (seperate != i)
            {
                cout << v[i] << " + ";
            }
            if (seperate == i)
            {
                cout << v[i] << " = ";
            }
        }
        for (int i = seperate + 1; i < v.size(); i++)
        {
            if (i != v.size() - 1)
            {
                cout << v[i] << " + ";
            }
            if (i == v.size() - 1)
            {
                cout << v[i];
            }
        }
    }
}

int main()
{

    int size;
    cout << "\nEnter that how many value do you want to type : ";
    cin >> size;

    vector<int> vec;

    for (int i = 0; i < size; i++)
    {
        int ele;
        cout << "\nEnter the value of " << i << " index : ";
        cin >> ele;
        vec.push_back(ele);
    }

    prefixAndSuffixComputation(vec);

    cout << endl;
    return 0;
}