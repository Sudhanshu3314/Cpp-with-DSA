/*  ----------------------- Hare Krishn  -----------------------
Programmer = Sudhanshu Barnwal
Topic = Functions
Purpose = Function Overloading
Date = 12/02/2024   */

#include <bits/stdc++.h>
using namespace std;

void swapNum(int &x, int &y)
{
    int temp = y;
    y = x;
    x = temp;
}

void swapNum(float &m, float &n)
{
    float temp = n;
    n = m;
    m = temp;
}

int main()
{

    cout << endl;
    int n1, n2;
    cout << "Enter n1 : ";
    cin >> n1;

    cout << "Enter n2 : ";
    cin >> n2;

    swapNum(n1, n2);

    cout << " n1 = " << n1 << endl;
    cout << " n2 = " << n2 << endl;

    float a, b;
    cout << "Enter value of a number : ";
    cin >> a;

    cout << "Enter value of b number : ";
    cin >> b;

    swapNum(a, b);

    cout << " a = " << a << endl;
    cout << " b = " << b << endl;

    cout << endl;
    return 0;
}