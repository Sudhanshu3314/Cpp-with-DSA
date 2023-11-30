/* Programmer = Sudhanshu Barnwal
Purpose = Write a Program to take a input from user for cost price (C.P.) and Selling Price (S.P.) and then calculate profit or loss
Date = 24/12/2022   */

#include <bits/stdc++.h>
using namespace std;

int main()
{

    int cp, sp;
    cout << "\nEnter Cost Price :- ";
    cin >> cp;
    cout << "\nEnter Selling Price :- ";
    cin >> sp;

    if (cp < sp)
    {
        cout << "\n Profit is Rs " << sp - cp << endl;
    }
    else if (sp == cp)
    {
        cout << "No Profit No Loss" << endl;
    }
    else
    {
        cout << "\n Loss is Rs " << cp - sp << endl;
    }
    return 0;
}