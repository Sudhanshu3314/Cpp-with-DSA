/* Programmer = Sudhanshu Barnwal 
Purpose = Write a program to print absolute value of a number entered by user
Date = 24/12/2022   */

#include<bits/stdc++.h>
using namespace std;

int main(){

    int num ;
    cout << "\n Enter any number :- " ;
    cin >> num ;

    if( num < 0 ){
        num *= (-1) ;
    }
    cout << "\n Absolute Value is " << num ; 
    return 0;
}