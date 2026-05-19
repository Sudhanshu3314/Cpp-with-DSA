/*  ----------------------- हरे कृष्ण  ----------------------- 
Programmer = Sudhanshu Barnwal 
Topic = If Else 
Purpose = Two numbers are given, print the bigger number, It is given that both numbers can’t be the same.
Date = 19/05/2026 */

#include<bits/stdc++.h>
using namespace std;

int main(){

    start:
    int n1, n2;
    cout << "\nEnter first number : ";
    cin >> n1;
    cout << "Enter second number : ";
    cin >> n2;

    if( n1 == n2 ){
        cout << "Input is invalid. Because given inputs can't be the same. Please try again" << endl;
        goto start;
    }

    cout << "\nBigger number from given input is " << ((n1>n2) ? n1 : n2) << endl;
    
    cout << endl ;
    return 0;
}