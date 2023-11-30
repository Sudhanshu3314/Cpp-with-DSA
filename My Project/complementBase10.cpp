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
    cout << "\nEnter any Number : ";
    cin >> num;

    cout << endl;
    int newNum = 0;
    int pow = 1;
    while (num > 0)
    {
        int rem = num % 2;
        rem = rem ^ 1;
        newNum = newNum + rem * pow;
        pow = pow * 2;
        num /= 2 ;
    }

    cout << newNum << endl;

    cout << endl;
    return 0;
}