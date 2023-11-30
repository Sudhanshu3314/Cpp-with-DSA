/*  ----------------------- Hare Krishn  -----------------------
Programmer = Sudhanshu Barnwal
Topic = Recursion
Purpose =
Date = /09/2023   */

#include <bits/stdc++.h>
using namespace std;

int fact(int n)
{
    if (n >= 0)
    {
        if (n == 1 || n == 0)
        {
            return n;
        }
        return n * fact(n - 1);
    }
    return 0;
}

int combination(int num, int r)
{
    return (fact(num) / (fact(r) * fact(num - r)));
}

int main()
{

    int n;
    cout << "\nEnter n : ";
    cin >> n;
    int r;
    cout << "\nEnter r : ";
    cin >> r;

    cout << endl;

    cout << combination(n, r) << endl;

    cout << endl;
    return 0;
}