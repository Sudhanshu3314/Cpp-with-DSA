/*  ----------------------- Hare Krishn  -----------------------
Programmer = Sudhanshu Barnwal
Topic = Recursion
Purpose =
Date = /09/2023   */

#include <bits/stdc++.h>
using namespace std;

int cube(int n)
{
    return n * n * n;
}

int main()
{

    int num;
    cout << "\nEnter any Number : ";
    cin >> num;

    cout << endl;

    cout << cube(num) << endl;

    cout << endl;
    return 0;
}