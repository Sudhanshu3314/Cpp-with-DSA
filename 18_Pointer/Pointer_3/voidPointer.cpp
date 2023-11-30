/* Programmer = Sudhanshu Barnwal
Topic = Void Pointer
Date = 02/09/2023   */

#include <bits/stdc++.h>
using namespace std;

int main()
{
    cout << endl ;
    
    // Void Pointer ( Generic Pointer )
    // Void Pointer can't be dereference directly ( for avoiding this we use typecasting for dereferencing the pointer )

    // These are special pointer that can point to any data type value

    float f = 10.2;
    int x = 24;
    void *ptrF = &f;

    cout << ptrF << endl; // Address of float f

    float *floatPtr = (float *)ptrF;

    cout << *floatPtr << endl;
    cout << floatPtr << endl;
    cout << endl;

    ptrF = &x;
    cout << ptrF << endl; // Address of int x

    int *intPointer = (int *)ptrF;
    cout << *intPointer << endl;
    cout << intPointer << endl;

    cout << endl;
    return 0;
}