/* Programmer = Sudhanshu Barnwal 
Purpose = Write a Program to take the values of Two variables a and b from the keyboard and then check the both the condition (a < 50 and a < b) are true
Date = 24/12/2022   */

#include<bits/stdc++.h>
using namespace std;

int main(){

    int a , b ;
    cout << "\nEnter the value of a :- " ;
    cin >> a ;
    cout << "\nEnter the value of b :- ";
    cin >> b ;

    cout << endl << ((a < 50 && a < b) ? 1 : 0) << endl ;
    return 0;
}