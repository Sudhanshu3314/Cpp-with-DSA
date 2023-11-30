/* Programmer = Sudhanshu Barnwal
Purpose = Pallindrome Of number
Date = 07/01/2023   */

#include <bits/stdc++.h>
using namespace std;

int main()
{

    int num;
    cout << "\n Enter any Number :- ";
    cin >> num;

    int rem;
    int rev = 0;
    int n = num;
    while (num > 0)
    {
        rem = num % 10;
        rev = 10 * rev + rem;
        num = num / 10;
    }
    if (rev == n)
    {
        cout << "\n"
             << n << " is a Pallindrome Number.";
    }
    else
    {
        cout << "\n"
             << n << " is NOT a Pallindrome Number.";
    }

    cout << endl;
    return 0;
}