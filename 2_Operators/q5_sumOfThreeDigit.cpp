/* Programmer = Sudhanshu Barnwal
Purpose = Write a Program to calculate the sum of digits of a 3 digit number.
Date = 24/12/2022   */

#include <bits/stdc++.h>
using namespace std;

int main()
{

    int num;
    cout << "\n Enter any three digit Number :- ";
    cin >> num;

    // let , num = 324
    int first = num / 100; // 3
    num = num % 100;       // 24

    int second = num / 10; // 2
    int third = num % 10;  // 4

    cout << "\nSum of first , second and third digit is " << first + second + third << endl;

    return 0;
}