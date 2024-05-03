/*  ----------------------- हरे कृष्ण  -----------------------
Programmer = Sudhanshu Barnwal
Topic = If Else
Purpose = Age of a person is given, print Adult if his/her age is greater than 18, otherwise print Teenager.

Date = 06/01/2024   */

#include <bits/stdc++.h>
using namespace std;

int main()
{

    int age;
    cout << "\nEnter age : ";
    cin >> age;

    cout << endl;
    if (age > 18)
    {
        cout << "\nAdult" << endl;
    }
    else
    {
        cout << "\nTeenager" << endl;
    }
    cout << endl;
    return 0;
}