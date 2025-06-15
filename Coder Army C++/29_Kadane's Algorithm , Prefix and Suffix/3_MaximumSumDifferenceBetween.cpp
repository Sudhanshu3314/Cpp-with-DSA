/*  ----------------------- हरे कृष्ण  -----------------------
Programmer = Sudhanshu Barnwal
Topic =  Array
Purpose = Maximum Sum difference between 2 element
Date = 17/05/2024   */

#include <bits/stdc++.h>
using namespace std;

int main()
{

    cout << endl;
    vector<int> vec{9, 5, 8, 12, 2, 3, 7, 4};

    int size = vec.size();
    int maxi = INT_MIN;
    int suffixMax = vec[size - 1];
    for (int i = size - 2; i >= 0; i--)
    {
        maxi = max(maxi, vec[i] - suffixMax);
        suffixMax = max(suffixMax, vec[i]);
    }
    cout << maxi << endl;

    cout << endl;
    return 0;
}