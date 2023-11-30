/* Programmer = Sudhanshu Barnwal
Purpose = Decide whether student is pass Or Fail
Date = 24/12/2022   */

#include <bits/stdc++.h>
using namespace std;

int main()
{

    int marks;
    cout << "\n Enter your marks :- ";
    cin >> marks;

    if (marks > 35)
    {
        cout << " Pass !! ";
    }
    else
    {
        cout << "Fail !! ";
    }

    marks > 35 ? cout << "\n Pass !! " : cout << "\n Fail !! ";

    return 0;
}