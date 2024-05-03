/*  ----------------------- हरे कृष्ण  ----------------------- 
Programmer = Sudhanshu Barnwal 
Topic = Number System 
Purpose = Write a program to convert decimal numbers to Octal numbers.

Date = 10/02/2024   */

#include<bits/stdc++.h>
using namespace std;

int main(){

    cout << endl ;
    int num ;
    cout << "Enter any Number : ";
    cin >> num ;

    int pow = 1 , ans = 0 ;

    int number = num ;

    while ( num )
    {
        int rem = num % 8 ;
        num = num / 8 ;
        ans = ans + pow * rem ;
        pow = pow * 10 ;
    }

    cout << "\nOctal number of " << number  << " is " << ans << endl ;

    cout << endl ;
    return 0;
}