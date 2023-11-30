/* Programmer = Sudhanshu Barnwal 
Purpose = Print the first multiple of 5 which is also a multiple of 7.
Date = 24/12/2022   */

#include<bits/stdc++.h>
using namespace std;

int main(){

    int i = 5 ;
    while ( true )
    {
        if( i % 7 == 0 ){
            cout << endl << i << " is a first multiple of 5 , 7  , 9 and 11" << endl ;
            break;
        }
        i += 5 ;
    }

    int c , count = 0;
    cout << "\n Enter any Number :- ";
    cin >> c ;

    for (int i = 1; ; i -= (-1) )
    {
        if ( i % 2 == 0 && i % 3 == 0 && i % 7 == 0 && i % 9 == 0 && i % 11 == 0 && i % 13 == 0 && i % 17 == 0 && i % 19 == 0 )
        {
            cout << "\n" << ++count << ") " << i << " is a multiple of 2 , 3 , 5 , 7  , 9 , 11 , 13 , 17" << endl ;
        }
        if( count == c ){
            break;
        }
    }
    
    return 0;
}