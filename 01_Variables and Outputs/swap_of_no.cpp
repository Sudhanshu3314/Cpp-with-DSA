/* Programmer = Sudhanshu Barnwal 
Purpose = Swap of numbers
Date =  23/12/2022   */

#include<bits/stdc++.h>
using namespace std;

int main(){

    int a , b ;
    cout << "\n Enter the value of a :- ";
    cin >> a ; // 5 
    cout << "\n Enter the value of b :- ";
    cin >> b ; // 4 

    a = a + b ; // a = 9 
    b = a - b ; // 9 - 5 = 4 = a i.e. b ~ a 
    a = a - b ; // 9 - 4 = 5 = b i.e. a ~ b 

    cout << "\n  The value of a is " << a << endl ;
    cout << "\n  The value of b is " << b << endl ;
    return 0;
}