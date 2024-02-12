/*  ----------------------- Hare Krishn  -----------------------
Programmer = Sudhanshu Barnwal
Topic = Number System
Purpose = Write a program to convert binary to Octal numbers

Date = 10/02/2024   */

#include <bits/stdc++.h>
using namespace std;

int main()
{

    cout << endl;
    int bin;
    cout << "Enter any binary number : ";
    cin >> bin;

    int pow1 = 1, dec = 0;

    while (bin)
    {
        int rem = bin % 10;
        bin = bin / 10;
        dec = dec + pow1 * rem;
        pow1 = pow1 * 2;
    }

    int decimal = dec ;

    // 13
    int pow2 = 1, octal = 0;
    while (dec)
    {
        int rem = dec % 8;
        dec = dec / 8;
        octal = octal + pow2 * rem;
        pow2 = pow2 * 10;
    }

    cout << "Binary Number to Decimal number is " << decimal << endl ;
    cout << "Decimal Number to Octal number is " << octal << endl ;



    cout << endl;
    return 0;
}