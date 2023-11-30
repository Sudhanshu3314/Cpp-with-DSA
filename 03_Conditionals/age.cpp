/* Programmer = Sudhanshu Barnwal 
Purpose = Age definig stage of life
Date = 24/12/2022   */

#include<bits/stdc++.h>
using namespace std;

int main(){

    int age ;
    cout << "\nEnter your age :- ";
    cin >> age ; 

    if ( age > 10 && age < 18 )
    {
        cout << "Child !!" ;
    }
    else if ( age >= 18 && age < 60 )
    {
        cout << "Adult !! ";
    }
    else if ( age > 60 )
    {
        cout << "Old !!";
    }
    return 0;
}