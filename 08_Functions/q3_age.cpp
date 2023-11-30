/* Programmer = Sudhanshu Barnwal
Purpose = Given the age of a person , write a function to check if the person is eligible to vote or not 
Date = 25/12/2022   */

#include <bits/stdc++.h>
using namespace std;

int eligible(int a)
{
    if (a < 18)
        cout << "\n You are NOT ELIGIBLE to vote.";
    else
        cout << "\n You are ELIGIBLE to vote.";

    return 0;
}

int main()
{

    int age;
    cout << "\n Enter your age :- ";
    cin >> age;

    eligible(age);

    return 0;
}