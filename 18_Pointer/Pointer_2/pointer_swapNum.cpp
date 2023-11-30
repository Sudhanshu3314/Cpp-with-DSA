/* Programmer = Sudhanshu Barnwal 
Topic = Pointer
Purpose = Swapping Numbers by pointer
Date = /08/2023   */

#include<bits/stdc++.h>
using namespace std;

void swapNum( int *x , int *y ){
    int temp = *x ;
    *x = *y ;
    *y = temp ;
}

int main(){

    int x = 24;
    int y = 56;

    // swapNum( &x , &y ); Like this we can also call function with that addressed parameter

    int *ptrX = &x;
    int *ptrY = &y;

    swapNum( ptrX , ptrY );

    cout << "\nx : " << x << endl;
    cout << "y : " << y << endl;

    cout << endl ;
    return 0;
}