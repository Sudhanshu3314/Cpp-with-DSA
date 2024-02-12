/*  ----------------------- Hare Krishn  -----------------------
Programmer = Sudhanshu Barnwal
Topic = Leetcode Problem
https://leetcode.com/problems/sqrtx/description/
Purpose = Square Of Root X
Date = 11/02/2024   */

#include <bits/stdc++.h>
using namespace std;

int main()
{

    cout << endl;
    int num;
    cout << "Enter any Number : ";
    cin >> num;

    if (num < 2 && num >= 0)
    {
        cout << num << endl;
        return 0;
    }

    for (int i = 1; i <= num; i++)
    {
        if (i == num / i)
        {
            cout << i << endl;
            break;
        }
        else if (i > num / i)
        {
            cout << i - 1 << endl;
            break;
        }
    }

    cout << endl;
    return 0;
}