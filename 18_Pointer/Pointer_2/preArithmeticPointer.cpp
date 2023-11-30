/* Programmer = Sudhanshu Barnwal 
Topic = 
Purpose = 
Date = /08/2023   */

#include<bits/stdc++.h>
using namespace std;

int main(){

    int arr[2] = { 4 , 7 };

    int *ptrArr = &arr[0];

    cout << *++ptrArr << endl; // This particular operator does first increment the address of pointer by 1 unit data size and then dereference the particular pointer and print the next indexed value of array

    cout << arr[0] << " " << arr[1] << endl; // There is no affect on array if i change the value preArithmetic Pointer
    cout << *ptrArr << endl;

    cout << endl ;
    return 0;
}