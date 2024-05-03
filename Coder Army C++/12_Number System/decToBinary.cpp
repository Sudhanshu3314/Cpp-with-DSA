/*  ----------------------- हरे कृष्ण  ----------------------- 
Programmer = SudhbinaryNumhu Barnwal 
Topic = Number System 
Purpose = Convert Number from Decimal Number to Binary Number 
Date = 01/02/2024   */

#include<bits/stdc++.h>
using namespace std;

int main(){

    cout << endl ;

    int num ;
    cout << "Enter any Number : ";
    cin >> num ;

    long long binaryNum = 0 , pow = 1;
    int number = num ;

    while (num > 0 )    
    {
        int rem = num & 1 ; // rem = num % 2 // Remainder
        num = num >> 1 ; // num = num / 2  // to get next number 
        binaryNum = rem * pow + binaryNum ; // One by one binary form
        pow *= 10 ;
    }

    cout << "Binary number of " << number << " is " << binaryNum << endl;
    

    cout << endl ;
    return 0;
}