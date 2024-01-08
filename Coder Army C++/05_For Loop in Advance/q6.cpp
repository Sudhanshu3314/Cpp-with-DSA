/*  ----------------------- Hare Krishn  -----------------------
Programmer = Sudhanshu Barnwal
Topic = Loop
Purpose = Print Sum of Cube of first n natural number
Date = 06/01/2024   */

#include <bits/stdc++.h>
using namespace std;

int main()
{

    cout << endl;

    int n;
    cout << "\nEnter any number : ";
    cin >> n;

    int sum = 0;
    for (int i = 1; i <= n; i++)
    {
        sum = sum + (i * i * i);
    }

    cout << sum << endl;

    cout << endl;
    return 0;
}