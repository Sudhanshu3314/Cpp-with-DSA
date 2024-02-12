/*  ----------------------- Hare Krishn  -----------------------
Programmer = Sudhanshu Barnwal
Topic = LeetCode Problem
https://leetcode.com/problems/add-digits/description/
Purpose = Add Digits
Date = 11/02/2024   */

#include <bits/stdc++.h>
using namespace std;

int main()
{

    cout << endl;
    int num;
    cout << "Enter any Number : ";
    cin >> num;

    int rem;

    while (num > 9)
    {
        int sum = 0;
        while (num)
        {
            rem = num % 10;
            num = num / 10;
            sum = sum + rem;
        }
        num = sum ;
    }

    cout << num << endl;

    cout << endl;
    return 0;
}