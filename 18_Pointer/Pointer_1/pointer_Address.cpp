/* Programmer = Sudhanshu Barnwal 
Topic = 
Purpose = 
Date = /01/2023   */

#include<bits/stdc++.h>
using namespace std;

int main(){

    int num1 = 23;
    // If we want to access the address of memory bucket we can use address of ( & ) operator with variable
    cout << "\nAddress of variable num1 by its own variable : " << &num1 << endl; // Here, I print the address of num variable by using & operator with variable
    
    float num2 = 54.36;
    cout << "\nAddress of variable num2 by its own variable : " << &num2 << endl; // Here, I print the address of num variable by using & operator with variable
    // So, we can store the address of variable into pointer of the same data type 
    cout << endl;

    int *ptrNum1 = &num1;
    float *ptrNum2 = &num2;
    cout << "\nAddress of variable num1 by ptr : " << ptrNum1 << endl;
    cout << "\nAddress of variable num2 by ptr : " << ptrNum2 << endl;
    // if we want to store the address of float variable then we have to create a pointer of float data type
    // and 
    // if we want to store the address of char variable then we have to create a pointer of char data type

    int *dummyPtr ; // only declaring the pointer 

    cout << "\n Garbage Address which stored in dummyPtr : " << dummyPtr << endl;

    int marks = 72;

    dummyPtr = &marks ; // re-assignment and updation of pointer 

    cout << "\nAddress which stored in dummyPtr of marks variable : " << dummyPtr << endl; // Here, I got the address of marks variable by printing dummyPtr
    cout << &marks; 

    // whenever I will the pointer with asterisk (*) then i will dereference the pointer means that 
    // whatever the address stored in pointer at that address value will be accessible by dereferencinge.
    // e.g. cout << *ptrNum << endl ; So , like this we can have access of value at address stored by pointer

    int num3 = 2462;
    int *ptrNum3 = &num3 ;
    cout << "\nAddress of num3 stored in ptrNum3 : " << ptrNum3 << endl;
    cout << "\nValue present at Address of num3 stored in ptrNum3 by dereferencing : " << *ptrNum3 << endl;

    num3 = 536;
    cout << "\nNew Updated value of num3 is " << num3 << endl;
    cout << "\nUpdated Value of num3 by ptr from 2462 to 536 : " << *ptrNum3 << endl; 

    // We can also update the value of num3 variable by dereferencing operator
    *ptrNum3 = 810 ;
    cout << "\nUpdating the value of num3 by derefencing : " << *ptrNum3 << endl;
    cout << "\nUpdating the value of num3 by derefencing : " << num3 << endl;

    int valueAtNum3Ptr = *ptrNum3 ; // storing the value of num3 variable into another variable by dereferencing the pointer
    cout << valueAtNum3Ptr << " " << *ptrNum3 << endl;

    cout << endl ;
    return 0;
}