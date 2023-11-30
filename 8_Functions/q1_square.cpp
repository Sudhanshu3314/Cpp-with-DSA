/* Programmer = Sudhanshu Barnwal 
Purpose = Write a function to print the square of the first five numbers
Date = 25/12/2022   */

#include<bits/stdc++.h>
using namespace std;

void square( ){
    cout << endl ;
    for (int i = 1; i <= 5 ; i++)
    {
        cout << "Square of " << i << " is " << i*i << endl ;
    }
    cout << endl ;
}

int main(){
    square() ;
    return 0;
}