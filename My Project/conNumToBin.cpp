/* Programmer = Sudhanshu Barnwal
Purpose = conversion of Decimal number to Binary Number 
Date = 14/01/2023   */

#include <bits/stdc++.h>
using namespace std;

int main()
{

    int num;
    cout << "\n Enter any Number :- ";
    cin >> num;

    int number = num;
    int bin = 0;
    int pow = 1;
    int evenParity = 0 ;
    int oddParity = 0 ;
    while (num > 0)
    {
        int parityDigit = num % 2;
        bin = bin + (pow * parityDigit);
        pow *= 10;
        num /= 2;
        if (parityDigit == 0)
        {
            evenParity++;
        }
        if (parityDigit == 1)
        {
            oddParity++;
        }
    }

    cout << "\n Number of zero's in binary number of " << number << " is " << evenParity << endl ;
    cout << "\n Number of one's in binary number of " << number << " is " << oddParity << endl ;
    cout << "\n Binary number of " << number << " is " << bin << endl;

    cout << endl;
    return 0;
}