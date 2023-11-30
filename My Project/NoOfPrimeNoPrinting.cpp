/* Programmer = Sudhanshu Barnwal
Purpose = Take a number from and print that number of Prime numbers according to user
Date = 31/12/2022   */

#include <bits/stdc++.h>
using namespace std;

int main()
{

    int num;
    cout << "\n Enter that number of Prime numbers do you want :- ";
    cin >> num;

    cout << endl;

    int counting = 0;
    for (int i = 2; i > 1; i++)
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
        if (counting == num)
        {
            break;
        }
    }

    return 0;
}