/* Programmer = Sudhanshu Barnwal
Topic =
Purpose = Pointer Arithmetic
Date = /08/2023   */

#include <bits/stdc++.h>
using namespace std;

// In hexadecimal address  addition
/*
8 +  4
9 -> 1st
a -> 2nd
b -> 3rd
c -> 4th  */

int main()
{

    int x = 25;
    int *ptr = &x;

    double dec = 22.66;
    double *ptrD = &dec ;

    cout << "\nSize of Variable x : " << (sizeof x) << endl; // in my particular system , integer variable size is 4 bytes and this size is dependent on Core Operating system , machine configuration , compiler support
    cout << "\nSize of Variable dec : " << (sizeof dec) << endl; 

    cout << ptr << " " << (ptr + 1) << endl;
    cout << ptrD << " " << (ptrD + 2) << " " << (ptrD + 3) << " " << (ptrD - 1) << endl;  // Here , + 1 is adding the 1 unit equivalent of the size of its data type 

    /*  ptrD + 2 means ptrD + 2 * sizeof( double ) = addressof(ptrD) + 2 * 8 
    = addressof(ptrD) + 16   */

    cout << endl;
    return 0;
}