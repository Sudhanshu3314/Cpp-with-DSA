/* Programmer = Sudhanshu Barnwal
Purpose = Library function i.e. cmath header file
Date = 25/12/2022   */

#include <bits/stdc++.h>
#include <iostream>
#include <cmath>

using namespace std;

int main()
{

    int num, n, deg;
    cout << "\n Enter any Number :- ";
    cin >> num;

    cout << "Square Root of " << num << " is " << sqrt(num) << endl << endl ;

    cout << "\n Enter any Number :- ";
    cin >> n;
    cout << "\n Enter degree to that number :- ";
    cin >> deg;

    cout << "\n" << n << " raised to " << deg << " is " << pow(n, deg) << endl ;
    return 0;
}