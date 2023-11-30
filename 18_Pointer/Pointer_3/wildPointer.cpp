/* Programmer = Sudhanshu Barnwal 
Topic = Wild Pointer
Date = 02/09/2023   */

#include<bits/stdc++.h>
using namespace std;

int main(){

    int x ; // declaration of variable and also having garbage value 

    int *ptrX ; // only declared and not defined // declaration of pointer variable and also having some random garbage address value and also never defined 

    // A wild pointer is a type of a pointer where the user declares a pointer but not initialize it. Due to this it ends up pointing to some random memory location.

    // Due to this we might get some undefined behaviout and crashes *
    // In some cases we might get segmentation falut and this fault is related to memory space fault

    cout << endl;
    cout << ptrX << " " << *ptrX << endl; 

    cout << endl ;
    return 0;
}