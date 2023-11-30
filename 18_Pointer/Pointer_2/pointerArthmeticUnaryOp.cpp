/* Programmer = Sudhanshu Barnwal 
Topic = 
Purpose = Pointer arithmetic by unary operator
Date = /08/2023   */

#include<bits/stdc++.h>
using namespace std;

int main(){

    int x = 10 ;
    int *ptrX = &x;

    cout << ptrX << endl;

    // ptrX = ptrX + 1 ;
    ptrX += 1 ; // Addtion assignment operator

    cout << ptrX << endl;

    cout << endl ;
    return 0;
}