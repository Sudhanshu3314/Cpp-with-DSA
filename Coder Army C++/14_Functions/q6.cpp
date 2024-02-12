/*  ----------------------- Hare Krishn  -----------------------
Programmer = Sudhanshu Barnwal
Topic = Functions
Purpose = Given two numbers n, r. Find nCr (Combination). Use Function here.

Date = 12/02/2024   */

#include <bits/stdc++.h>
using namespace std;

int fact(int num)
{
    if (num == 1)
    {
        return 1;
    }
    return num * fact(num - 1);
}

int combination(int n, int r)
{
    return fact(n) / (fact(r) * fact(n - r));
}

int main()
{

    cout << endl;
    int n, r;
    cout << "Enter n : ";
    cin >> n;
    cout << "Enter r : ";
    cin >> r;

    cout << combination(n, r);

    cout << endl;
    return 0;
}