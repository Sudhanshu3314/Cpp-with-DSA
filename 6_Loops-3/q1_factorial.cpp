/* Programmer = Sudhanshu Barnwal 
Purpose = Write a Program to calculate the factorial of a number
Date = 24/12/2022   */

#include<bits/stdc++.h>
using namespace std;

int main(){

    int num ;
    cout << "\nEnter any Number :- ";
    cin >> num ;

    int fact = 1 ;
    for (int i = 1; i <= num ; i++)
    {
        fact *= i ;
    }
    cout << "\n The factorial of " << num << " is " << fact << endl ;

    return 0;
}