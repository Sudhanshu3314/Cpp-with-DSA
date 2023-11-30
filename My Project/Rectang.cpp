/*  ----------------------- Hare Krishn  ----------------------- 
Programmer = Sudhanshu Barnwal 
Topic = Recursion
Purpose = 
Date = /09/2023   */

#include<bits/stdc++.h>
using namespace std;

int main(){

    int a ,  b , c ,d;
    cout << "\nEnter value of a side : ";
    cin >> a ;
    cout << "\nEnter value of b side : ";
    cin >> b ;
    cout << "\nEnter value of c side : ";
    cin >> c ;
    cout << "\nEnter value of d side : ";
    cin >> d ;

    if( ((a==b) && (d==c) )|| ((a==c) && (b == d)) || ((a==d)&&(b==c)) )
    {
        cout << 1 << endl;
    }
    else{
        cout << 0 ;
    }
    cout << endl ;
    return 0;
}