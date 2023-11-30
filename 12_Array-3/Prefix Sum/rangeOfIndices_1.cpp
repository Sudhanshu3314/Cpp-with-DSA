/* Programmer = Sudhanshu Barnwal
Topic = Prefix Sum
Purpose = Given an array of integers of size n. Answer q queries where you need to print the sum of values in a given range of indices from l to r ( both included )
Date = 24/07/2023   */

#include <bits/stdc++.h>
using namespace std;

int main()
{

    int size;
    cout << "\nEnter that how many values do you want to type : ";
    cin >> size;

    vector<int> vec(size + 1, 0);

    for (int i = 1; i < vec.size(); i++)
    {
        cout << "\nEnter the value of " << i << " index : ";
        cin >> vec[i];
    }

    for (int i = 1; i < vec.size(); i++)
    {
        vec[i] = vec[i - 1] + vec[i];
    }

    int noOfQueries;
    cout << "\n -- > Enter that how many times you want to enter queries : ";
    cin >> noOfQueries;

    while (noOfQueries--)
    {
        int l, r;
        cout << "\n > > > > ---- Enter value of l : ";
        cin >> l;
        cout << "\n > > > > ---- Enter value of r : ";
        cin >> r;

        cout << "\n --------> Sum of Elements from " << l << " to " << r << " is " << 
        vec[r] - vec[l - 1] << endl; // sum = v[r-1] - v[l-1] // this returns the calculated value
    }

    cout << endl;
    return 0;
}