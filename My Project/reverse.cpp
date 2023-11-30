/*  ----------------------- Hare Krishn  -----------------------
Programmer = Sudhanshu Barnwal
Topic = Recursion
Purpose =
Date = /09/2023   */

#include <bits/stdc++.h>
using namespace std;

int valueRev(int n)
{
    int rev = 0;
    if (n <= 5000 && n >= -5000)
    {
        while (n > 0)
        {
            rev = rev * 10 + (n % 10);
            n /= 10;
        }
        return rev;
    }
    else
    {
        return 0;
    }
}

int main()
{

    int num;
    cout << "\nEnter number : ";
    cin >> num;

    cout << endl;

    cout << valueRev(num) << endl;

    cout << endl;
    return 0;
}