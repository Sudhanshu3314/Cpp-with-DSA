/*  ----------------------- Hare Krishn  ----------------------- 
Programmer = Sudhanshu Barnwal 
Topic = Leetcode Problem 
https://leetcode.com/problems/complement-of-base-10-integer/description/
Purpose = Complement Of Base Ten Integer
 if 5 then its binary is 101 and their complement is 010 and this binary decimal is 2
Date = 11/02/2024   */

#include<bits/stdc++.h>
using namespace std;

int main(){

    cout << endl ;

    int num ;
    cout << "Enter any Number : ";
    cin >> num ;

    int pow = 1;
    int number = num ;
    
    while ( num > 0 )
    {
        pow = pow * 2 ;
        num = num / 2 ;
    }
    
    cout << pow - 1 - number << endl ;

    cout << endl ;
    return 0;
}