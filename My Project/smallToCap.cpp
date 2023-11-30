/*  ----------------------- Hare Krishn  ----------------------- 
Programmer = Sudhanshu Barnwal 
Topic = Recursion
Purpose = 
Date = /09/2023   */

#include<bits/stdc++.h>
using namespace std;

char convertChar( char letter ){
    return letter - 'a' + 'A';
}

int main(){

    char letter ;
    cout << "\nEnter any Character : ";
    cin >> letter;

    cout << convertChar(letter) << endl;

    cout << endl ;
    return 0;
}