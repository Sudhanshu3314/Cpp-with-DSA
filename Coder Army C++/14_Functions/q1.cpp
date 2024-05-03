/*  ----------------------- हरे कृष्ण  ----------------------- 
Programmer = Sudhanshu Barnwal 
Topic = Functions
Purpose = Find the cube of a number using a function
Date = 12/02/2024   */

#include<bits/stdc++.h>
using namespace std;

int cube( int n ){
    return n*n*n;
}

int main(){

    cout << endl ;
    int num ;
    cout << "Enter any Number : ";
    cin >> num ;

    cout << cube(num) << endl ;

    cout << endl ;
    return 0;
}