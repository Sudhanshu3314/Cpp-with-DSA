/*  ----------------------- हरे कृष्ण  ----------------------- 
Programmer = Sudhanshu Barnwal 
Topic = Operators 
Purpose = Even and Positive Number: Write a program that prints “YES” if a given number is both even and positive, otherwise it will print “NO”.
Date = 06/01/2024   */

#include<bits/stdc++.h>
using namespace std;

int main(){

    cout << endl ;

    int num;
    cout << "Enter any Number : ";
    cin >> num ;

    if( num % 2 == 0 && num > 0 ){
        cout << "Yes " << endl;
    }
    else{
        cout << "No" << endl ;
    }

    

    cout << endl ;
    return 0;
}