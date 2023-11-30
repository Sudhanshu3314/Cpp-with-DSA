/* Programmer = Sudhanshu Barnwal
Purpose = Count the number of occurrences of a particular element x
Date = 08/01/2023   */

#include <bits/stdc++.h>
using namespace std;

int main()
{

    int size;
    cout << "\n Enter that how many value do you want to enter :- ";
    cin >> size;

    cout << endl;
    vector<int> v(size);
    for (int i = 0; i < v.size(); i++)
    {
        cout << "\n Enter the value of " << i + 1 << " index :- ";
        cin >> v[i];
    }

    int key;
    cout << "\n Enter any value for matching with vector :- ";
    cin >> key;

    cout << endl;
    int occurrence = 0;
    // for (int i = 0; i < v.size(); i++)
    // {
    //     if (v[i] == key)
    //         occurrence++;
    // }

    for (int element : v)
    {
        if (element == key)
            occurrence++;
    }
    cout << "\n ----> Number of occurrence of " << key << " is " << occurrence << endl;

    cout << endl ;
    return 0;
}