/*  ----------------------- हरे कृष्ण  ----------------------- 
Programmer = Sudhanshu Barnwal 
Topic = If Else 
Purpose = Age of a person is given, print Adult if his/her age is greater than 18, otherwise print Teenager.
Date = 19/05/2026 */

#include<bits/stdc++.h>
using namespace std;

int main(){

    cout << endl ;
    int age;
    cout << "\nEnter person age : ";
    cin >> age;

    cout << "\nPerson is " << (( age > 18 ) ? "adult" : "teenager") << " by their age" << endl;
    

    cout << endl ;
    return 0;
}