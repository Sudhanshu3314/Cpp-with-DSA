/*  ----------------------- हरे कृष्ण  -----------------------
Programmer = Sudhanshu Barnwal
Topic = Pointer
Purpose = Pointer concepts
Date = 17/05/2024   */

#include <bits/stdc++.h>
using namespace std;

int main()
{

    cout << endl;
    int a = 134;
    cout << "Address of a : " << &a << endl; // Address of variable by ampersand 
    int *ptr = &a;
    cout << "Address of a : " << ptr << endl; // Address of variable by pointer with initializing ampersand and variable

    cout << "Value of a : " << a << endl; // Printing value of variable
    cout << "Value of a : " << *ptr << endl; // Printing value of variable by dereferencing the variable

    int b = 4231;

    ptr = &b ; // Updating the address of another variable in same pointer

    cout << "Address of b : " << &b << endl; // Address of variable by ampersand 
    cout << "Address of b : " << ptr << endl; // Address updated by another varible address storing 

    cout << "Address of b : " << b << endl;
    cout << "Value of b : " << *ptr << endl;  // Printing value of variable by dereferencing the variable

    b = 900488;
    cout << "Value of b : " << *ptr << endl; // Dereferencing the updated value by its pointer

    char c = '2';
    char *ptr1 = &c ;

    cout << "Size of pointer int b : " << sizeof( ptr ) << " bytes" << endl ; 
    cout << "Size of pointer char c : " << sizeof( ptr1 ) << " bytes" << endl ; 

    /*  Size of pointers can be defined by its operating system either its 64-bit or 32-bit
    if OS is 64-bit then pointer size will be 8 bytes = 64 bit 
    if OS is 32-bit then pointer size will be 4 bytes = 32 bit 
    So, its totally depend on its bit operating system because it store the address of variable so whenever address is generated of any variable i.e. dependent on its operating system   */

    cout << endl;
    return 0;
}