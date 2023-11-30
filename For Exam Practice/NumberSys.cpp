/* Programmer = Sudhanshu Barnwal
Topic = Recursion
Purpose = From decimal to Binary , Octal , Hexamdecimal
Date = /09/2023   */

#include <bits/stdc++.h>
using namespace std;

int main()
{

    int num;
    cout << "\nEnter any Decimal Number : ";
    cin >> num;

    int n2 = num;
    int binary = 0, power = 1;

    while (num > 0)
    {
        int rem = num % 2;
        binary = rem * power + binary;
        power = power * 10;
        num = num / 2;
    }
    int n3 = n2;
    int octal = 0, pow1 = 1;
    while (n2 > 0)
    {
        int rem = n2 % 8;
        octal = rem * pow1 + octal;
        pow1 = pow1 * 10;
        n2 = n2 / 8;
    }

    int n4 = n3;
    int hexadecimal = 0;
    int pow2 = 1;
    while (n3 > 0)
    {
        int rem = n3 % 16;
        hexadecimal = rem * pow2 + hexadecimal;
        pow2 = pow2 * 10;
        n3 = n3 / 16;
    }

    cout << endl;
    cout << "Binary Number of " << n4 << " is " << binary << endl;
    cout << "Octal of " << n4 << " is " << octal << endl;
    cout << "Hexadecimal of " << n4 << " is " << hexadecimal << endl;

    cout << endl;
    return 0;
}