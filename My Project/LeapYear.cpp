/*  ----------------------- Hare Krishn  -----------------------
Programmer = Sudhanshu Barnwal
Topic = Recursion
Purpose =
Date = /09/2023   */

#include <bits/stdc++.h>
using namespace std;

int main()
{

    int num;
    cout << "\nEnter no. : ";
    cin >> num;

    if (num % 400 == 0 || ((num % 4 == 0) && (num % 100 != 0)))
    {
        cout << "\n"
             << num << " is a Leap Year. " << endl;
    }
    else
    {
        cout << "\n"
             << num << " is a Common Year. " << endl;
    }

    cout << endl;
    return 0;
}