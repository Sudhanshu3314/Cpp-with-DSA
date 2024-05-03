/*  ----------------------- हरे कृष्ण  ----------------------- 
Programmer = Sudhanshu Barnwal 
Topic = Number System 
Purpose = Write a program to convert binary numbers to decimal numbers using a for loop.

Date = 02/02/2024   */

#include<bits/stdc++.h>
using namespace std;

int main(){

    cout << endl ;

    int bin;
    cout << "Enter the Binary number : ";
    cin >> bin;

    int decimal = 0 ;
    int pow = 1;

    int binaryNum = bin ;

    for (bin = binaryNum ; bin > 0 ; bin = bin / 10 ) 
    {
        int rem = bin % 10 ;
        decimal = decimal + rem * pow ;
        pow = pow * 2 ;
    }

    cout << "Decimal Number of Binary " << binaryNum << " is " <<  decimal << endl ;
    
    cout << endl ;
    return 0;
}