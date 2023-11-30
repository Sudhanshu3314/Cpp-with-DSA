/* Programmer = Sudhanshu Barnwal 
Topic = 
Purpose = 
Date = /08/2023   */

#include<bits/stdc++.h>
using namespace std;

int main(){

    int arr[2] = { 4 , 8 };

    int *ptrArr = &arr[0];

    cout << (*ptrArr)++ << endl; // Here , first value is dereference of that pointer particular address for print the value and then increment the value by 1 of array indexed 0

    cout << arr[0] << " " << arr[1] << endl; // There is affect on pointer

    cout << *ptrArr << endl;

    cout << endl ;
    return 0;
}