/*  ----------------------- हरे कृष्ण  ----------------------- 
Programmer = Sudhanshu Barnwal 
Topic = Number System 
Purpose = Write a program to convert Octal numbers to decimal numbers.

Date = 10/02/2024   */

#include<bits/stdc++.h>
using namespace std;

int main(){

    cout << endl ;
    int octal;
    cout << "Enter Octal number : ";
    cin >> octal ;

    int ans = 0 , pow = 1 ;

    while (octal)
    {
        int rem = octal % 10 ;
        octal = octal / 10 ;
        ans = ans + rem * pow ;
        pow = pow * 8 ;
    }

    cout << ans << endl ;
    
    

    cout << endl ;
    return 0;
}