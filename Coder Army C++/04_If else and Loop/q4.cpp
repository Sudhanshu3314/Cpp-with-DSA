/*  ----------------------- हरे कृष्ण  -----------------------
Programmer = Sudhanshu Barnwal
Topic = If Else
Purpose = Ticket Price Calculator: Create a program that asks the user for their age and checks if they qualify for a discounted ticket price (e.g., under 12 and over 65 get discounts), If they are eligible print “YES” else “NO”.

Date = 06/01/2024   */

#include <bits/stdc++.h>
using namespace std;

int main()
{

    int age;
    cout << "\nEnter age : ";
    cin >> age;

    cout << age;

    if (age < 12)
    {
        cout << "\nYes, you are eligible for discounted ticket price of 65%." << endl;
    }
    else
    {
        cout << "\nNO, you are eligible for discounted ticket price of 65%." << endl;
    }

    cout << endl;
    return 0;
}