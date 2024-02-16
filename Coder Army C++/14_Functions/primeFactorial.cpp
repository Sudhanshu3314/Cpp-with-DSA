/*  ----------------------- Hare Krishn  -----------------------
Programmer = Sudhanshu Barnwal
Topic = Functions
Purpose = Prime and Factorial
Date = 12/02/2024   */

#include <bits/stdc++.h>
using namespace std;

bool Prime(int n)
{
    if (n == 1)
    {
        return 0;
    }
    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            return 0;
        }
    }
    return 1;
}

int Factorial(int n)
{
    int val = 1;
    for (int i = 1; i <= n; i++)
    {
        val *= i;
    }
    return val;
}

int main()
{

    cout << endl;
    int a;
    int b;
    cout << "Enter the value of a : ";
    cin >> a;
    cout << "Enter the value of b : ";
    cin >> b;

    cout << Prime(a) << endl;
    cout << Factorial(a) << endl;
    cout << Prime(b) << endl;
    cout << Factorial(b) << endl;
    cout << Prime(b - a) << endl;
    cout << Factorial(b - a) << endl;

    cout << endl;
    return 0;
}