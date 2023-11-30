/* Programmer = Sudhanshu Barnwal 
Purpose = Write a program to take length and breadth of rectangle and print the area and perimeter of rectangle
Date = 23/12/2022   */

#include<bits/stdc++.h>
using namespace std;

int main(){

    int l , b ;
    cout << "\nEnter the length of Rectangle :- " ;
    cin >> l; 
    cout << "\nEnter the breadth of Rectangle :- " ;
    cin >> b; 

    cout << "\nArea of Rectangle is " << l*b << " sq.units " << endl;
    cout << "\nPerimeter of Rectangle is " << 2*(l+b) << " units" << endl;

    return 0;
}