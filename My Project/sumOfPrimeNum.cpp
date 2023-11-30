/* Programmer = Sudhanshu Barnwal
Purpose = Write a C++ program to check whether a Number can be expressed as a Sum of Two Prime Numbers.
Date = 13/01/2023   */

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int num;
    cout << "\n Enter any Number :- ";
    cin >> num;

    cout << endl;
    for (int i = 2; i <= num; i++)
    {
        int twofact = 2;
        for (int j = 1; j <= i; j++)
        {
            if (i % j == 0)
            {
                twofact--;
            }
        }
        if (twofact == 0 && (num - i) > 0)
        {
            int twofact_sec = 2;
            for (int j = 1; j <= (num - i); j++)
            {
                if ((num - i) % j == 0)
                    twofact_sec--;
            }
            if (twofact_sec == 0 && (num - i) + i == num)
            {
                cout << "-----> " << (num - i) << " + " << i << " = " << num << endl;
            }
        }
    }

    cout << endl;
    return 0;
}