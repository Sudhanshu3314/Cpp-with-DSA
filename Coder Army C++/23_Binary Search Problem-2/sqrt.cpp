/*  ----------------------- हरे कृष्ण  -----------------------
Programmer = Sudhanshu Barnwal
Topic = Binary Search Problem
Purpose = Square root of number
Date = 06/12/2023   */

#include <bits/stdc++.h>
using namespace std;

int squareRoot(int n)
{
    int start = 0;
    int end = n;

    int ans;

    while (start <= end)
    {
        int mid = start + (end - start) / 2;
        if (mid == n / mid)
        {
            return mid;
        }
        else if (mid > n / mid)
        {
            end = mid - 1;
        }
        else if (mid < n / mid)
        {
            start = mid + 1;
            ans = mid;
        }
    }

    return ans;
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