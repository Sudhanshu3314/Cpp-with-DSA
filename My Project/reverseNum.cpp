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
    cout << "\nEnter num : ";
    cin >> num;

    cout << endl;
    int sum = 0;
    while (num)
    {
        int rem = num % 10;
        num = num / 10;
        sum = sum * 10 + rem;
        if (sum > INT_MAX / 10 || sum < INT_MIN / 10)
        {
            cout << 0 << endl;
            return 0;
        }
    }

    cout << sum << endl;

    cout << endl;
    return 0;
}