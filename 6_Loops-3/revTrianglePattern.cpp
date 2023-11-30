/* Programmer = Sudhanshu Barnwal 
Purpose = Take the number of rows and columns then print Reverse triangular pattern
Date = 24/12/2022   */

#include<bits/stdc++.h>
using namespace std;

int main(){

    int row ;
    cout << "\nEnter no. of Rows :- ";
    cin >> row ;

    cout << endl;
    for (int i = 0; i < row ; i++)
    {
        for (int j = 0; j < row - i ; j++)
        {
            cout << "*" << " " ;
        }
        cout << endl ;
    }
    
    return 0;
}