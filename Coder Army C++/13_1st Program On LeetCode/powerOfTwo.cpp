/*  ----------------------- Hare Krishn  -----------------------
Programmer = Sudhanshu Barnwal
Topic = Leetcode Problem
https://leetcode.com/problems/power-of-two/description/
Purpose = Power of 2 (Second Solution)
Date = 11/02/2024   */

#include <bits/stdc++.h>
using namespace std;

int main()
{

    cout << endl;
    int num;
    cout << "Enter any Number : ";
    cin >> num;

    int count = 0 ;

    int number = num ;

    while (num > 1 )
    {
        int rem = num % 2;
        if (rem == 1)
        {
            cout << "\nNot Coming in Power Of Two" << endl;
            return 0;
        }
        num = num / 2;
        count++;
    }

    cout << "\nThis number is coming in Power Of Two " << endl ;
    cout << "2 raised to " << count << " is " << number << endl ;

    cout << endl;
    return 0;
}