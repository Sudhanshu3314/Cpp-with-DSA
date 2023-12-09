/*  ----------------------- Hare Krishn  -----------------------
Programmer = Sudhanshu Barnwal
Topic = Binary Search Problem
Purpose = Square root of number
Date = 06/12/2023   */

#include <bits/stdc++.h>
using namespace std;

int squareRoot(int n)
{
    int start = 1;
    int end = n / 2;

    if (n == 1 || n == 0)
        return n;

    int mid;
    while (start <= end)
    {
        mid = start + (end - start) / 2;
        if (mid * mid == n)
            return mid;
        else if (mid * mid > n)
            end = mid - 1;
        else if (mid * mid < n)
            start = mid + 1;
    }

    return mid;
}

int main()
{

    int num;
    cout << "\nEnter your number : ";
    cin >> num;

    cout << "\nSquare root of " << num << " is " << squareRoot(num) << endl;

    cout << endl;
    return 0;
}