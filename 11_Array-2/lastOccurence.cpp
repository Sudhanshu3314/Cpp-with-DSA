/* Programmer = Sudhanshu Barnwal
Purpose = Find the last occurence of an element x in a given array
Date = 10/01/2023   */

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int size;
    cout << "\n Enter that how many value do you want to enter in vector :- ";
    cin >> size;

    cout << endl;

    vector<int> v(size);

    for (int i = 0; i < v.size(); i++)
    {
        cout << "\n Enter the element of " << i << " index :- ";
        cin >> v[i];
    }

    int x;
    cout << "\n Enter the value of x :- ";
    cin >> x;

    int occurence = -1;
    /* for (int i = 0; i < v.size(); i++)
    {
        if (v[i] == x)
        {
            occurence = i;
        }
    } */

    for (int i = v.size() - 1; i >= 0; i--)
    {
        if (v[i] == x)
        {
            occurence = i;
            break;
        }
    }

    cout << occurence << endl;

    return 0;
}