/*  ----------------------- Hare Krishn  -----------------------
Programmer = Sudhanshu Barnwal
Topic = Number System
Purpose = Binary to Decimal
Date = 01/02/2024   */

#include <bits/stdc++.h>
using namespace std;

int main()
{

    cout << endl;
    long long bin;
    cout << "Enter binary number : ";
    cin >> bin;

    int decimal = 0;
    int pow = 1;

    while (bin > 0)
    {
        int rem = bin % 10;
        bin = bin / 10;
        decimal = decimal + rem * pow;
        pow = pow * 2;
    }

    cout << "The Decimal Equivalent of the given Binary is: " << decimal << endl;

    cout << endl;
    return 0;
}