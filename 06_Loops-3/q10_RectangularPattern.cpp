/* Programmer = Sudhanshu Barnwal 
Purpose = Rectangular Pattern
Date = 24/12/2022   */

#include<bits/stdc++.h>
using namespace std;

int main(){

    int row , col ;
    cout << "\nEnter no. of Rows :- ";
    cin >> row ;
    cout << "\nEnter no. of Column :- ";
    cin >> col ;

    cout << endl;
    for (int i = 1; i <= row ; i++)
    {
        for (int j = 1; j <= col ; j++)
        {
            cout << "*" << " " ;
        }
        cout << endl ;
    }
    
    return 0;
}