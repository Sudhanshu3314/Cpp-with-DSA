/* Programmer = Sudhanshu Barnwal
Purpose = Pass By Reference
Date = 25/12/2022   */

#include <bits/stdc++.h>
using namespace std;

void changeValue(int &num) // formal parameter for num which is variable itself is a nickname for actual parameter
{
    num = 243423;
}
int main()
{

    int num;
    num = 42;

    cout << endl;
    changeValue(num); // actual parameter
    cout << num << endl;
    return 0;
}