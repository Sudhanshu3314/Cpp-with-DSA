/*  ----------------------- हरे कृष्ण  ----------------------- 
Programmer = Sudhanshu Barnwal 
Topic = Operators 
Purpose = Age Check: Implement a program that checks if a person is a teenager. A teenager is someone whose age is between 13 and 19 (inclusive).

Date = 06/01/2024   */

#include<bits/stdc++.h>
using namespace std;

int main(){

    cout << endl ;
    int age;
    cout << "Enter your age : ";
    cin >> age;

    if( age > 13 && age < 19 ){
        cout << "Yes" << endl ;
    }
    else{
        cout << "No" << endl ;
    }
    

    cout << endl ;
    return 0;
}