/*  ----------------------- Hare Krishn  -----------------------
Programmer = Sudhanshu Barnwal
Topic = Recursion
Purpose =
Date = /09/2023   */

#include <bits/stdc++.h>
using namespace std;

int main()
{

    cout << "\n Hare Krishn " << endl;
    int n;
    cout << "\nEnter number : ";
    cin >> n;
    // int snum ;
    // cout << "\nEnter second number : " ;
    // cin >> snum ;

    int sum = 0;

    // Doubt 
    for (int i = 1; i <= n; i++)
    {
        int val = pow(i,2) ;
        sum = sum + val;
        cout << val << endl;
    }

    cout << " sum : " << sum << endl;

    cout << endl;
    return 0;
}