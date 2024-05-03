/*  ----------------------- हरे कृष्ण  -----------------------
Programmer = Sudhanshu Barnwal
Topic = Leetcode Problem
 https://leetcode.com/problems/ugly-number/description/
Purpose = An ugly number is a positive integer whose prime factors are limited to 2, 3, and 5.

Given an integer n, return true if n is an ugly number.
Date = 12/02/2024   */

#include <bits/stdc++.h>
using namespace std;

int main()
{

    cout << endl;
    int num;
    cout << "Enter any Number : ";
    cin >> num;

    if (num < 1)
    {
        cout << "Not Ugly Number " << endl;
        return 0;
    }
    int value;
    while (num > 1)
    {
        bool flag = true;
        if (num % 2 == 0)
        {
            value = 2;
            flag = false;
        }
        else if (num % 3 == 0)
        {
            value = 3;
            flag = false;
        }
        else if (num % 3 == 0)
        {
            value = 5;
            flag = false;
        }
        num = num / value;
        if (flag)
        {
            cout << "Not Ugly Number " << endl;
            return 0;
        }
    }

    cout << "This is UGLY Number " << endl;

    cout << endl;
    return 0;
}