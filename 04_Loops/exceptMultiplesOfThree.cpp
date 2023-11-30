/* Programmer = Sudhanshu Barnwal 
Purpose = Print all the values between 1 and 50 except for the multiples of 3 .
Date = 24/12/2022   */

#include<bits/stdc++.h>
using namespace std;

int main(){

    for (int i = 1; i <= 50 ; i++)
    {
        if ( i % 3 == 0 )
        {
            continue;
        }
        cout << i << endl ;
    }
    
    return 0;
}