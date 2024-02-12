/*  ----------------------- Hare Krishn  -----------------------
Programmer = Sudhanshu Barnwal
Topic = Functions
Purpose = Print “Hello Coder Army” n times using Function.

Date = 12/02/2024   */

#include <bits/stdc++.h>
using namespace std;

void printHelloCoderArmy(int ntimes)
{
    for (int i = 1; i <= ntimes; i++)
    {
        cout << i << ") Hello Coder Army " << endl;
    }
}

int main()
{

    cout << endl;
    int n;
    cout << "Enter n times : ";
    cin >> n;

    cout << endl ;

    printHelloCoderArmy(n);

    cout << endl;
    return 0;
}