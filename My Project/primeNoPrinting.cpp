/* Programmer = Sudhanshu Barnwal
Purpose = Take a input from user and print the Prime number till that number
Date = 31/12/2022   */

#include <bits/stdc++.h>
using namespace std;

int main()
{

    int num;
    cout << "\n Enter that number till where you want Prime Number :- ";
    cin >> num;

    cout << endl;
    int counting = 0;

    for (int i = 1; i <= num; i++)
    {
        int twofact = 2;
        for (int j = 1; j <= i; j++)
        {
            if (i % j == 0)
            {
                twofact--;
            }
        }
        if (twofact == 0)
        {
            cout << ++counting << ") " << i << endl;
        }
    }

    cout << endl;
    return 0;
}