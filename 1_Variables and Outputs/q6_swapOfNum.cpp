/* Programmer = Sudhanshu Barnwal 
Purpose = Write a Program to Swap of two numbers with the help of a third variable
Date = 23/12/2022   */

#include<bits/stdc++.h>
using namespace std;

int main(){

    int a , b ;
    cout <<"\nEnter the value of a :- " ;
    cin >> a ;
    cout <<"\nEnter the value of b :- " ;
    cin >> b ;

    int temp = a ;
    a = b ;
    b = temp ;
    cout << "\nThe value of a is " << a << endl ;
    cout << "\nThe value of b is " << b << endl ;
    return 0;
}