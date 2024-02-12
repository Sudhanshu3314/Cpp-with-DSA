/*  ----------------------- Hare Krishn  -----------------------
Programmer = Sudhanshu Barnwal
Topic = Functions
Purpose = There are three numbers a,b,c. Put the value of a into b, put value of b into c and put value of c into a. Do it using Function.
Date = 12/02/2024   */

#include <bits/stdc++.h>
using namespace std;

void Swapping(int &x, int &y, int &z)
{
    int temp = z;
    z = y;
    y = x;
    x = temp;
}

int main()
{

    cout << endl;
    int a, b, c;
    cout << "\n Enter value of a : ";
    cin >> a;
    cout << "\n Enter value of b : ";
    cin >> b;
    cout << "\n Enter value of c : ";
    cin >> c;

    Swapping(a, b, c);

    cout << " a = " << a << endl;
    cout << " b = " << b << endl;
    cout << " c = " << c << endl;

    cout << endl;
    return 0;
}