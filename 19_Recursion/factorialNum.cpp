/* Programmer = Sudhanshu Barnwal
Topic = Recursion
Purpose = Factorial of number using recursion
Date = 16/09/2023   */

#include <bits/stdc++.h>
using namespace std;

int fact(int n)
{
    if (n == 1 || n == 0)
        return 1;
    return n * fact(n - 1);
}

int main()
{

    // int num;
    // cout << "\nEnter any Number : ";
    // cin >> num;

    int num = 5;

    cout << "\n Factorial of " << num << " is " << fact(num) << endl;

    cout << endl;
    return 0;
}