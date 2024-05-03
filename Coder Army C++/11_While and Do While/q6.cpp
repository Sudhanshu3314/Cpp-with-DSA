/*  ----------------------- हरे कृष्ण  ----------------------- 
Programmer = Sudhanshu Barnwal 
Topic = While and Do While loop 
Purpose = Give a number n, find if it is prime or not, use a while loop and break here to solve it.

Date = 06/01/2024   */

#include<bits/stdc++.h>
using namespace std;

int main(){

    cout << endl ;
    int n ;
    cout << "Enter number : ";
    cin >> n ;


    int i = 2;
    while (i < n)
    {
        if( n % i == 0 ){
            cout << n << " is NOT Prime Number"<<endl;
            return 0;
        }
        i++;
    }
    cout << n << " is Prime Number"<<endl;

    cout << endl ;
    return 0;
}