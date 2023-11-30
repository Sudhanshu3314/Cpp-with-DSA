/* Programmer = Sudhanshu Barnwal
Purpose = To know that which number is even and odd
Date = 24/12/2022   */

#include <bits/stdc++.h>
using namespace std;

int main()
{

    int num;
    cout << "\nEnter any Number :- ";
    cin >> num;

    if (num > 0)
    {
        if (num % 2 == 0)
        {
            cout << "\n"
                 << num << " is an Even Number.";
        }
        else
        {
            cout << "\n"
                 << num << " is an Odd Number.";
        }
    }
    else
    {
        cout << "Even and Odd are always Positive integer.";
    }

    return 0;
}