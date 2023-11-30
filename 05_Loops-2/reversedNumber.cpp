/* Programmer = Sudhanshu Barnwal 
Purpose = Reverse the digits of a number
Date = 24/12/2022   */

#include<bits/stdc++.h>
using namespace std;

int main(){

    int num ;
    cout << "\nEnter any Number :- ";
    cin >> num ;

    int rev = 0 ;
    int n = num ;
    while (num > 0 )
    {
        int rem = num % 10 ;
        rev = rev*10 + rem ;
        num = num / 10 ;
    }
    cout << "\n Reverse of " << n << " number is " << rev << endl ;
    
    return 0;
}