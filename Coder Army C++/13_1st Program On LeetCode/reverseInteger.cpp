/*  ----------------------- Hare Krishn  ----------------------- 
Programmer = Sudhanshu Barnwal 
Topic = Leetcode Problem 
https://leetcode.com/problems/reverse-integer/description/
Purpose = Reverse Integer
Date = 11/02/2024   */

#include<bits/stdc++.h>
using namespace std;

int main(){

    cout << endl ;

    int num ;
    cout << "Enter any Number : ";
    cin >> num ;

    int rev = 0 ;
    int number = num ;

    while (num != 0)
    {
        int rem = num % 10 ;
        rev = rev * 10 + rem ;
        num = num / 10 ;
    }

    cout << "Reverse of " << number << " is " << rev << endl ;

    cout << endl ;
    return 0;
}