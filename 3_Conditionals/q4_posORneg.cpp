/* Programmer = Sudhanshu Barnwal
Purpose = Write a program to print positive number entered by the user, if user enters a negative number ,it is skipped
Date = 24/12/2022   */

#include <bits/stdc++.h>
using namespace std;

int main()
{

    int num;
    cout << "\n Enter any Number :- ";
    cin >> num;

    if (num > 0)
    {
        cout << "Your given number is Positive." << endl;
    }
    else if (num == 0)
    {
        cout << "Your given number is zero" << endl;
    }
    else
    {
        cout << "The number is negative and skipped." << endl; 
    }
    
    return 0;
}