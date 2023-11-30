/* Programmer = Sudhanshu Barnwal
Purpose = Given two numbers a and b . Write a program using functions to print the all Prime numbers between them
Date = 25/12/2022   */

#include <bits/stdc++.h>
using namespace std;

void PrimeNo(int origin, int terminate)
{
    if (origin < 1 || terminate < 1)
    {
        cout << "\n Prime numbers are always taken from the natural numbers only." << endl;
    }
    else if (origin == 1 || terminate == 1)
    {
        cout << "\n 1 is neither be considered Prime Number nor Composite Number because 1 doesn't two factor it has only one factor." << endl;
    }
    else if (origin <= terminate)
    {
        cout << endl;
        for (int i = origin; i <= terminate; i++)
        {
            int twofact = 2;
            for (int j = 1; j <= i; j++)
            {
                if (i % j == 0)
                    twofact--;
            }
            if (twofact == 0)
                cout << i << " ";
        }
    }
    cout << endl;
}

int main()
{

    int o, t;

    cout << "\n Enter Originating Number :- ";
    cin >> o;
    cout << "\n Enter terminating Number :- ";
    cin >> t;

    PrimeNo(o, t);
    return 0;
}
