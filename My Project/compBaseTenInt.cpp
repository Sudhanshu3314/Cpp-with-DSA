/*  ----------------------- Hare Krishn  -----------------------
Programmer = Sudhanshu Barnwal
Topic = Recursion
Purpose =
Date = /09/2023   */

#include <bits/stdc++.h>
using namespace std;

int main()
{

    int num;
    cout << "\nComplement of base 10 integer num : ";
    cin >> num;

    int pow = 1;
    int binary = 0;
    int comBin = 0;

    int n = num;

    while (num > 0)
    {
        int rem = num % 2;
        binary = binary + rem * pow;
        if (rem == 0)
        {
            rem = 1;
        }
        else if (rem == 1)
        {
            rem = 0;
        }
        cout << rem << endl;
        comBin = comBin + rem * pow;
        pow = pow * 10;
        num = num / 2;
    }

    cout << "\nBinary of " << n << " is " << binary << endl;
    cout << "\nComplement Binary of " << n << " is " << comBin << endl;

    int pow1 = 1;
    int comNum = 0;

    while (comBin > 0)
    {
        int rem = comBin % 10;
        comNum = comNum + rem * pow1;
        pow1 = pow1 * 2;
        comBin = comBin / 10;
    }

    cout << comNum << endl;

    cout << endl;
    return 0;
}