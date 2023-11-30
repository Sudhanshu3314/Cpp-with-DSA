/* Programmer = Sudhanshu Barnwal
Purpose = Write a program to calculate the sum of the first and the second last digit of a 5 digit number
Date = 24/12/2022   */

#include <bits/stdc++.h>
using namespace std;

int main()
{

    int num;
    cout << "\n Enter any Five Digit Number :- ";
    cin >> num;

    // let , num = 42379

    int first = num / 10000; // first digit i.e. 4
    num = num % 10000;       // 2376

    int second = num / 1000; // second digit i.e. 2
    num = num % 1000;        // 379

    int third = num / 100; // third digit i.e. 3
    num = num % 100;       // 79

    int fourth = num / 10; // fourth digit i.e. 7
    int fifth = num % 10;  // fifth digit i.e. 9

    cout << "\n Sum of first and fourth digit is " << first + fourth << endl;

    return 0;
}