/* Programmer = Sudhanshu Barnwal 
Purpose = Using of Logical Operator
Date = 23/12/2022   */

#include<bits/stdc++.h>
using namespace std;

int main(){

    bool exp1 = true , exp2 = false ;
    cout << ( exp1 && exp2 ) << endl ; // false
    cout << ( exp1 || exp2 ) << endl ; // true
    cout << (! exp2 ) << endl ; // true
    cout << (! exp1 ) << endl ; // false
    cout << !(! exp1 ) << endl ; // true
    return 0;
}