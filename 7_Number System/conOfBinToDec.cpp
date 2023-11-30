/* Programmer = Sudhanshu Barnwal 
Purpose = Conversion of Binary Number To Decimal Number
Date = 25/12/2022   */

#include<bits/stdc++.h>
using namespace std;

int main(){

    int bin , pow = 1 , dec = 0 ;
    // cout << "\n Enter any Binary Number :- ";
    // cin >> bin ;
    bin = 101 ;

    cout << endl;
    int binary = bin ;
    while ( bin > 0 )
    {
        int lastDigit = bin % 10 ;
        dec += (pow*lastDigit); // dec = dec + (pow*lastDigit)
        pow *= 2 ; // pow = pow * 2 
        bin /= 10 ; // bin = bin / 10 
    }
    cout << "\n Decimal number of " << binary << " binary number is " << dec << endl ;
    return 0;
}