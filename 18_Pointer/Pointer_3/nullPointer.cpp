/* Programmer = Sudhanshu Barnwal
Topic = Null Pointer
Date = 02/09/2023   */

#include <bits/stdc++.h>
using namespace std;

int main()
{

    // Null Pointer
    // If we want to have a pointer variable, which is just declared but will get address later to store it.
    // In this case we can use NULL pointer

    int *ptrX = NULL;
    int *p1 = 0;
    int *p2 = '\0'; // Ascii value of NULL
                    // We need to use NULL pointer and this is best practice bcoz if we want to use it to store address apart from having random address value which is not having good practice

    // 0 is mostly a special reserved memory address and many thing is dependent on Operating system and computer system

    //  Runtime might occur while dereferencing the NULL pointer

    cout << endl;
    cout << ptrX << " " << p1 << " " << p2 << endl; // We can't dereference NULL pointer

    cout << endl;
    return 0;
}