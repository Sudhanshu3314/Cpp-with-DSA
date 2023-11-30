/* Programmer = Sudhanshu Barnwal 
Purpose = Conversion Of Decimal number to Binary Number
Date = 25/12/2022   */

#include<bits/stdc++.h>
using namespace std;

int main(){

    int num , bin = 0 , pow = 1 ;
    cout << "\n Enter any Number :- ";
    cin >> num ;

    cout << endl ;
    int n = num ;
    while ( num > 0 )
    {
        int parityDigit = num % 2 ;
        bin += (pow*parityDigit); // bin = bin + (pow*parityDigit)
        pow *= 10;  // pow = pow*10
        num /= 2 ;  // num = num / 2 
    }
    cout << "\n Binary Number of " << n << " number is " << bin << endl ;
    return 0;
}