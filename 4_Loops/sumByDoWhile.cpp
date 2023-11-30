/* Programmer = Sudhanshu Barnwal 
Purpose = Sum of natural numbers by Do While Loop
Date = 24/12/2022   */

#include<bits/stdc++.h>
using namespace std;

int main(){

    int num;
    cout << "\n Enter any Natural Number :- ";
    cin >> num ;

    int n = num ;
    int sum = 0 ;
    do
    {
        sum = sum + num ;
        num--;
    }while ( num > 0 );
    
    cout << "\n Sum of Total " << n << " natural number is " << sum << endl ;
    return 0;
}