/* Programmer = Sudhanshu Barnwal
Topic = Recursion
Purpose = Fibonacci series using recursion method
Date = 21/09/2023   */

#include <bits/stdc++.h>
using namespace std;

int fibIndex(int num)
{
    if (num == 1 || num == 2)
        return (num - 1);
    return (fibIndex(num - 1) + fibIndex(num - 2));
}

int main()
{

    // int num;
    // cout << "\nEnter index of fibonacci series : ";
    // cin >> num;

    int num = 10;

    cout << " \n At the index of " << num << " fibonacci series have value i.e. " << fibIndex(num) << endl;

    // int a = 0;
    // int b = 1;
    // for (int i = 0; i < num; i++)
    // {
    //     int c = a + b;
    //     cout << i + 1 << ") " << a << endl;
    //     a = b;
    //     b = c;
    // }

    cout << endl;
    return 0;
}