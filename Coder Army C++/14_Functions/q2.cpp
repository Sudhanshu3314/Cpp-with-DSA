/*  ----------------------- Hare Krishn  -----------------------
Programmer = Sudhanshu Barnwal
Topic = Functions
Purpose = Reverse a number n using Function, Constraints: -5000<=n<=5000

Date = 12/02/2024   */

#include <bits/stdc++.h>
using namespace std;

int reverseNum(int n)
{
    int rev = 0;
    if (n <= 5000 && n >= -5000)
    {
        while (n != 0)
        {
            int rem = n % 10;
            n = n / 10;
            rev = rev * 10 + rem;
        }
    }

    return rev;
}

int main()
{

    cout << endl;

    int num;
    cout << "Enter any Number : ";
    cin >> num;

    cout << endl;
    cout << reverseNum(num);

    cout << endl;
    return 0;
}