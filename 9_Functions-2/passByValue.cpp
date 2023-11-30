/* Programmer = Sudhanshu Barnwal
Purpose = Pass By Value
Date = 25/12/2022   */

#include <bits/stdc++.h>
using namespace std;

void changeValue(int num) // formal parameter
{
    num = 100;
}

int main()
{

    int num = 5;
    changeValue(num); // actual parameter
    cout << endl;
    cout << num << endl;

    return 0;
}