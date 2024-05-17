/*  ----------------------- हरे कृष्ण  -----------------------
Programmer = Sudhanshu Barnwal
Topic = Prefix Sum
Purpose = Prefix Sum
Date = 15/05/2024   */

#include <bits/stdc++.h>
using namespace std;

int main()
{

    cout << endl;
    vector<int> vec{6, 4, 5, -3, 2, 8};

    int n = vec.size();

    cout << " Prefix Sum : " << endl ;
    cout << "{ ";
    for (int i = 0; i < n; i++)
    {
        if (i != n - 1)
            cout << vec[i] << ", ";
        else
            cout << vec[i] << " } ";
    }
    cout << endl;

    for (int i = 1; i < n; i++)
    {
        vec[i] = vec[i] + vec[i - 1];
    }

    cout << "{ ";
    for (int i = 0; i < n; i++)
    {
        if (i != n - 1)
            cout << vec[i] << ", ";
        else
            cout << vec[i] << " } ";
    }

    cout << endl;
    return 0;
}