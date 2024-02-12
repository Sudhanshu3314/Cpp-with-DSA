/*  ----------------------- Hare Krishn  -----------------------
Programmer = Sudhanshu Barnwal
Topic = Operators
Purpose = Take three numbers a,b,c from the user, print yes if a is either greater than b or c. Otherwise print NO.

Date = 06/01/2024   */

#include <bits/stdc++.h>
using namespace std;

int main()
{

    cout << endl;
    int a, b, c;
    cout << "Enter first number : ";
    cin >> a;
    cout << "\nEnter second number : ";
    cin >> b;
    cout << "\nEnter third number : ";
    cin >> c;

    if (a > b or a > c)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;

    cout << endl;
    return 0;
}