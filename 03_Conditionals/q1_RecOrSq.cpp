/* Programmer = Sudhanshu Barnwal
Purpose = Write a program which takes a length and breadth from user and check if it is rectangle or square
Date = 24/12/2022   */

#include <bits/stdc++.h>
using namespace std;

int main()
{

    int l, b;
    cout << "\nEnter length of quadrilateral :- ";
    cin >> l;
    cout << "\nEnter breadth of quadrilateral :- ";
    cin >> b;

    if (l == b)
    {
        cout << "\n This quadrilateral is Square." << endl;
    }
    else
    {
        cout << "\n This quadrilateral is Rectangle." << endl;
    }
    return 0;
}