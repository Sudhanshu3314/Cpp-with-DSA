/*  ----------------------- Hare Krishn  ----------------------- 
Programmer = Sudhanshu Barnwal 
Topic = Recursion
Purpose = 
Date = /09/2023   */

#include<bits/stdc++.h>
using namespace std;

int main(){

    int num;
    cout << "\nEnter any Number : ";
    cin >> num ;

    cout << endl;
    int countZero = 0 ;
    while ( num > 4 )
    {
        num /= 5 ;
        countZero += num ;
    }
    cout << countZero << endl;

    cout << endl ;
    return 0;
}