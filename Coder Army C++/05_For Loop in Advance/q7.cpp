/*  ----------------------- Hare Krishn  -----------------------
Programmer = Sudhanshu Barnwal
Topic = Loop
Purpose = Print nth fibonacci Number
Date = 06/01/2024   */

#include <bits/stdc++.h>
using namespace std;

int main()
{

    cout << endl;

    int n;
    cout << "Enter any Number : ";
    cin >> n;

    int last = 0;
    int pre = 1;
    int current;

    for (int i = 0; i < n; i++)
    {
        current = last + pre;
        last = pre;
        pre = current;
    }

    cout << current - last << endl;
    cout << endl;
    return 0;
}