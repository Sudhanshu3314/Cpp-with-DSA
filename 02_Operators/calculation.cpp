/* Programmer = Sudhanshu Barnwal 
Purpose = Calculation using Arithmetic Operator
Date =  23/12/2022   */

#include<bits/stdc++.h>
using namespace std;

int main(){

    int num1 ,num2 ;
    cout << "\n Enter First Number :- " ;
    cin >> num1 ;
    cout << "\n Enter Second Number :- " ;
    cin >> num2 ;

    cout << "\n" << num1 << " + " << num2 << " = " << num1 + num2 << endl ;
    cout << num1 << " - " << num2 << " = " << num1 - num2 << endl ;
    cout << num1 << " x " << num2 << " = " << num1 * num2 << endl ;
    cout << num1 << " / " << num2 << " = " << num1 / num2 << endl ;
    cout << "Here, Dividend is " << num1 << " and Divisor is " << num2 << " then remainder is " << num1 % num2 << endl ;
    
    return 0;
}