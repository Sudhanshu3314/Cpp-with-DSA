/* Programmer = Sudhanshu Barnwal 
Purpose = Find the armstrong number between 100 and 500
Date = /01/2023   */

#include<bits/stdc++.h>
#include<cmath>
using namespace std;

int main(){

    cout << endl ;
    for (int i = 100 ; i <= 500 ; i++)
    {
        int sum  = 0 ;
        int num = i ;
        while ( num > 0 )
        {
            int digits = num % 10 ;
            sum += ( digits * digits * digits) ;
            num = num / 10 ;
        }
        if ( sum == i ){
            cout << i << " is Armstrong number." << endl ;
        }
    }

    cout << endl ;
    return 0;
}