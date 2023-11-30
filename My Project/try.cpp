/*  ----------------------- Hare Krishn  -----------------------
Programmer = Sudhanshu Barnwal
Topic = Recursion
Purpose =
Date = /09/2023   */

#include <bits/stdc++.h>
using namespace std;

int square( int n ){

    if( n == 1 ){
        return 1;
    }

    int val = square(n-1);
    return (n*n) + val;
}

// int square( int n ){
//     int sum = 0 ;
//     for (int i = n; i >= 1 ; i-- )
//     {
//         sum += (i*i);
//     }
//     return sum;
// }

int main()
{

    int n;
    cout << "\nEnter no. of square in chess board : ";
    cin >> n ;

    cout << square(n) << endl;

    cout << endl;
    return 0;
}