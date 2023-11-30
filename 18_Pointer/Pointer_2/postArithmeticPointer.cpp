/* Programmer = Sudhanshu Barnwal
Topic =
Purpose =
Date = /08/2023   */

#include <bits/stdc++.h>
using namespace std;

int main()
{

    int arr[2] = {11, 57};

    int *ptrArr = &arr[0];

    cout << "\n Accessing Elements of an Array 0 by pointer : " << ptrArr << " " << *(ptrArr) << endl;
    cout << "\n Accessing Elements of an Array 1 by pointer : " << (ptrArr + 1) << " " << *(ptrArr + 1) << endl;

    cout << endl;

    cout << *ptrArr++ << endl; // PostFix Pointer artihmetic // First value is dereference for print the value of *ptrArr and then pointer address increment 1 unit of data size
    
    cout << arr[0] << " " << arr[1] << endl ; // There is no affect array value

    cout << *ptrArr << endl; // Here , print the next Element 

    cout << endl;
    return 0;
}