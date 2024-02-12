/*  ----------------------- Hare Krishn  ----------------------- 
Programmer = Sudhanshu Barnwal 
Topic = Number System 
Purpose = Write a program to convert decimal numbers to binary numbers using a for loop.
Date = 02/02/2024   */

#include<bits/stdc++.h>
using namespace std;

int main(){

    cout << endl ;
    int num ;
    cout << "Enter any Number : ";
    cin >> num ;

    int number = num ;

    int pow = 1 ;
    int binary = 0 ;
    for ( ; num > 0 ; num = num / 2 )
    {
        int rem = num % 2 ;
        binary = binary + rem * pow ;
        pow = pow * 10 ;
    }

    cout << "Binary number of " << number << " is " << binary << endl;
    
    cout << endl ;
    return 0;
}