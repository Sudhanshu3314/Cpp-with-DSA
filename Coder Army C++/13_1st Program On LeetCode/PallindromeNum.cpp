/*  ----------------------- Hare Krishn  ----------------------- 
Programmer = Sudhanshu Barnwal 
Topic = Leetcode Problem 
https://leetcode.com/problems/palindrome-number/description/
Purpose = Pallindrome Number
Date = 11/02/2024   */

#include<bits/stdc++.h>
using namespace std;

int main(){

    cout << endl ;

    int num ;
    cout << "Enter any Number : ";
    cin >> num ;

    int number = num ;
    int rev = 0 ;

    while (num)
    {
        int rem = num % 10 ;
        num = num / 10 ;
        rev = rev * 10 + rem ;
    }

    cout << endl ;
    
    if( rev == number ){
        cout << rev << " is a Pallindrome Number " << endl ;
    }
    else {
        cout << number << " is NOT a Pallindrome Number " << endl ;
    }
    

    cout << endl ;
    return 0;
}