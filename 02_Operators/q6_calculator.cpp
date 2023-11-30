/* Programmer = Sudhanshu Barnwal 
Purpose = Write a Program to perform basic arithmetic operations (+ , - , / , * , % )
Date = 24/12/2022   */

#include<bits/stdc++.h>
using namespace std;

int main(){

    int num1 , num2 ;
    cout << "\nEnter first Number :- ";
    cin >> num1 ;
    cout << "\nEnter second Number :- ";
    cin >> num2 ;

    cout << num1 << " + " << num2 << " = " << num1 + num2 << endl ;
    cout << num1 << " - " << num2 << " = " << num1 - num2 << endl ;
    cout << num1 << " x " << num2 << " = " << num1 * num2 << endl ;
    cout << num1 << " / " << num2 << " = " << num1 / num2 << endl ;
    return 0;
}