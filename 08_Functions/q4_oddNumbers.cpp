/* Programmer = Sudhanshu Barnwal
Purpose = Given two numbers a and b . Write a program using functions to print the all odd numbers between them 
Date = 25/12/2022   */

#include <bits/stdc++.h>
using namespace std;

void oddNo(int origin , int terminate)
{
    cout << endl;
    for (int i = origin; i <= terminate; i++)
    {
        if (i % 2 != 0)
            cout << i << " ";
    }
    cout << endl;
}
int main()
{

    int o ,t;

    cout << "\n Enter Originating Number :- ";
    cin >> o;
    cout << "\n Enter terminating Number :- ";
    cin >> t;

    oddNo(o,t);
    return 0;
}