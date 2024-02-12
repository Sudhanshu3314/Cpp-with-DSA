/*  ----------------------- Hare Krishn  ----------------------- 
Programmer = Sudhanshu Barnwal 
Topic = Number System 
Purpose = Write a program to convert Octal numbers to binary numbers
Date = 10/02/2024   */

#include<bits/stdc++.h>
using namespace std;

int main(){

    cout << endl ;
    int octal ;
    cout << "Enter Octal Number : ";
    cin >> octal ;

    int pow1 = 1 , dec = 0 ;
    while ( octal )
    {
        int rem = octal % 10 ;
        octal = octal / 10 ;
        dec = dec + pow1 * rem ;
        pow1 = pow1 * 8 ;
    }

    int decimal = dec ;
    int pow2 = 1 , binary = 0 ;
    while ( dec )
    {
        int rem = dec % 2 ;
        binary = binary + pow2 * rem ;
        dec = dec / 2 ;
        pow2 = pow2 * 10 ;
    }

    cout << "Octal Number to Decimal number is " << decimal << endl ;
    cout << "Decimal Number to Binary number is " << binary << endl ;
    
    
    

    cout << endl ;
    return 0;
}