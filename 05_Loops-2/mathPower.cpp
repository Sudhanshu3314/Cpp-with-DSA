/* Programmer = Sudhanshu Barnwal 
Purpose = Given 2 numbers a and b.Find a raised to b,
Date = 24/12/2022   */

#include<bits/stdc++.h>
using namespace std;

int main(){

    int num , power ;
    cout << "\n Enter any Number :- ";
    cin >> num ;

    cout << "\n Enter the power of number :- ";
    cin >> power ; 

    int ans = 1 ;

    for (int i = 1; i <= power ; i++)
    {
        ans *= num ;
    }
    cout << "\n -----> " << num << " raised to " << power << " is " << ans << endl ;
    
    
    return 0;
}