/* Programmer = Sudhanshu Barnwal 
Topic = 
Purpose = 
Date = /08/2023   */

#include<bits/stdc++.h>
using namespace std;

int main(){

    int arr[2] = { 25 , 78 };

    int *ptrArr = &arr[0];

    cout << ++(*ptrArr) << endl;

    cout << arr[0] << " " << arr[1] << endl; // There is affect on array value

    cout << endl ;
    return 0;
}