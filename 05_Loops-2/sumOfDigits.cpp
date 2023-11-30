/* Programmer = Sudhanshu Barnwal 
Purpose = Do the sum of digits number which is entered by user
Date = 24/12/2022   */

#include<bits/stdc++.h>
using namespace std;

int main(){

    int num ;
    cout << "\nEnter any Number :- ";
    cin >> num ; // 1433

    int sum = 0 ;
    int n = num ;
    while ( num > 0 )
    {
        sum = sum + (num % 10)  ;
        num = num / 10 ;
    }
    cout << "Sum of digits of " << n << " is " << sum << endl ;
    return 0;
}