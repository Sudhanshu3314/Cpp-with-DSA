/* Programmer = Sudhanshu Barnwal 
Purpose = Sum of natural numbers by For Loop
Date = 24/12/2022   */

#include<bits/stdc++.h>
using namespace std;

int main(){

    int num;
    cout << "\n Enter any Natural Number :- ";
    cin >> num ;

    int sum = 0 ;
    for (int i = 1; i <= num ; i++)
    {
        sum += i ;
    }
    
    cout << "\n Sum of Total " << num << " natural number is " << sum << endl ;
    return 0;
}