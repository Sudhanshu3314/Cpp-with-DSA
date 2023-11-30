/* Programmer = Sudhanshu Barnwal 
Purpose = List of Binary Number
Date = /01/2023   */

#include<bits/stdc++.h>
using namespace std;

int binaryNum( int num ){
    int pow = 1 ;
    int bin = 0;
    while ( num > 0 )
    {
        int lastDigit = num % 2 ;
        bin = bin + (pow*lastDigit);
        pow *= 10;
        num /= 2;
    }
    return bin;
}

int main(){

    int num ;
    cout << "\n Till where you want Binary Number :- ";
    cin >> num ;

    for (int i = 1; i <= num ; i++)
    {
        cout << "Binary Number of " << i << " is " << binaryNum( i ) << endl; 
    }

    cout << endl ;
    return 0;
}