/* Programmer = Sudhanshu Barnwal 
Purpose = Using Misc Operator
Date = 23/12/2022   */

#include<bits/stdc++.h>
using namespace std;

int main(){

    cout << "\nStorage Size of int is " << sizeof(int) << " bytes" << endl ;
    cout << "Storage Size of float is " << sizeof(float) << " bytes" << endl ;
    cout << "Storage Size of char is " << sizeof(char) << " bytes" << endl ;
    cout << "Storage Size of bool is " << sizeof(bool) << " bytes" << endl ;
    cout << "Storage Size of short int is " << sizeof(short int) << " bytes" << endl ;
    cout << "Storage Size of double is " << sizeof(double) << " bytes" << endl ;
    cout << "Storage Size of long double is " << sizeof(long double) << " bytes" << endl ;
    cout << "Storage Size of string is " << sizeof(string) << " bytes" << endl ;
    cout << "Storage Size of string is " << sizeof(char) << " bytes" << endl ;

    int a = 4 ;
    char no = '4' ;
    bool flag ;
    a == no ? flag = true : flag = false ;

    cout << "\n Address of a variable is " << (&a) << endl ; // & is address operator for getting the address of variable

    float c = 3.142434;

    cout << "\n c is " << int(c) << endl; // This is called typecasting

    return 0;
}