/* Programmer = Sudhanshu Barnwal 
Purpose = Sum of natural numbers by While Loop
Date = 24/12/2022   */

#include<bits/stdc++.h>
using namespace std;

int main(){

    int num;
    cout << "\n Enter any Natural Number :- ";
    cin >> num ;

    int sum = 0 , i = 1 ;
    int n = num ;
    while ( num >= i )
    {
        sum += num  ; // sum = sum + num 
        num--;
    }
    cout << "\n Sum of Total " << n << " natural number is " << sum << endl ;
    return 0;
}