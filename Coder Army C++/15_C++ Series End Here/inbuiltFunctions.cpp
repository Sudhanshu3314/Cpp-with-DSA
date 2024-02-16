/*  ----------------------- Hare Krishn  -----------------------
Programmer = Sudhanshu Barnwal
Topic = Questions
Purpose =
Date = 14/02/2024   */

#include <bits/stdc++.h>
using namespace std;

int main()
{

    cout << endl;

    int num;
    cout << "Enter no : ";
    cin >> num;

    int n;
    cout << "Enter another no : ";
    cin >> n;

    cout << endl;
    cout << endl;

    cout << num << " raised to " << n << " is " << pow(num, n) << endl;
    cout << "Minimum from " << num << " & " << n << " is " << min(num, n) << endl;
    cout << "Maximum from " << num << " & " << n << " is " << max(num, n) << endl;
    cout << "Square root of " << num << " is " << sqrt(num) << endl;
    cout << "Square root of " << n << " is " << sqrt(n) << endl;
    cout << "Greated Common divisor from " << num << " & " << n << " is " << __gcd(num, n) << endl;

    cout << endl;
    return 0;
}