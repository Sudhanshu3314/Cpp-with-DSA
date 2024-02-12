/*  ----------------------- Hare Krishn  ----------------------- 
Programmer = Sudhanshu Barnwal 
Topic = Functions 
Purpose =  Swap 2 numbers a, b without using extra variables. Range of 
-10000<=a,b<=100000. 

Date = 12/02/2024   */

#include<bits/stdc++.h>
using namespace std;

void Swap( int &x , int &y ){

    // x = 4 
    // y = 3 

    x = x + y ; // x = 7 
    y = x - y ; // y = 4
    x = x - y ; // x = 3
}

int main(){

    cout << endl ;
    int a, b, c;
    cout << "\n Enter value of a : ";
    cin >> a; // 4 
    cout << "\n Enter value of b : ";
    cin >> b; // 3 

    Swap( a , b );
    
    cout << " a = " << a << endl;
    cout << " b = " << b << endl;

    cout << endl ;
    return 0;
}