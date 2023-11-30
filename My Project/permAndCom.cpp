/* Programmer = Sudhanshu Barnwal 
Purpose = Using factorial function calculating permutation and combination
Date = /01/2023   */

#include<bits/stdc++.h>
using namespace std;

int fact( int num ){
    int fact = 1 ;
    for (int i = 1; i <= num ; i++)
    {
        fact *= i ;
    }
    return fact ;
}

int per( int number , int r ){
    
    int per = fact( number )/fact(number - r ) ;
    return per ;
}

int com( int number , int r ){
    
    int com = per(number , r ) / fact(r) ;
    return com ;
}

int main(){

    int n , r ;
    cout << "\n Enter the value of n :- " ;
    cin >> n ;
    cout << "\n Enter the value of r :- " ;
    cin >> r ;

    cout << "\n If n is " << n << " and r is " << r << endl ;
    cout << "\n -----> Combination value is " << com( n , r ) << endl ;
    cout << "\n -----> Permutation value is " << per( n , r ) << endl ;

    cout << endl ;
    return 0;
}