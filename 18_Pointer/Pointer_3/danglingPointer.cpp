/* Programmer = Sudhanshu Barnwal
Topic = Dangling Pointer
Date = 02/09/2023   */

#include <bits/stdc++.h>
using namespace std;

int main()
{

    // Dangling Pointer
    // It is a type of pointer that points to a memory location that is not Valid.

    int *ptr = NULL;
    {
        int x = 25;
        ptr = &x;
        cout << ptr << endl;
    }
    
    cout << ptr << endl;

    cout << endl;
    return 0;
}