/* Programmer = Sudhanshu Barnwal 
Purpose = Take the number of rows and columns then print star dot rectangular pattern
Date = 24/12/2022   */

#include<bits/stdc++.h>
using namespace std;

int main(){

    int row , col; 
    cout << "\nEnter no. of Rows :- ";
    cin >> row ;
    
    cout << endl;

    for (int i = 0; i < row ; i++)
    {
        for (int j = 0; j <= i ; j++)
        {
            cout << "*" << " " ;
        }
        cout << endl ;
    }
    
    return 0;
}