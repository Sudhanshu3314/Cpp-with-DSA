/*  ----------------------- Hare Krishn  -----------------------
Programmer = Sudhanshu Barnwal
Topic = Recursion
Purpose =
Date = /09/2023   */

#include <bits/stdc++.h>
using namespace std;

int main()
{

    int num;
    cout << "\nEnter any Number : ";
    cin >> num;

    int n = num;
    while (n > 9)
    {
        int sum = 0;
        while (n)
        {
            int rem = n % 10;
            n = n / 10;
            sum = sum + rem;
        }
        n = sum;
    }

    cout << n << endl;

    cout << endl;
    return 0;
}