/*  ----------------------- हरे कृष्ण  -----------------------
Programmer = Sudhanshu Barnwal
Topic = While and Do While loop
Purpose = Given a number n, print all the numbers from 1 to n(inclusive) which are not divisible by 3 and 5. (use Continue here).

Date = 06/01/2024   */

#include <bits/stdc++.h>
using namespace std;

int main()
{

    cout << endl;
    int n;
    cout << "Enter any number : ";
    cin >> n;

    // for (int i = 0; i <= n; i++)
    // {
    //     if (i % 3 == 0 && i % 5 == 0)
    //     {
    //         continue;
    //     }
    //     cout << i << endl ;
    // }

    int i = 1;
    while (i <= n)
    {
        if (i % 3 == 0 && i % 5 == 0)
        {
            i++;
            continue;
        }
        cout << i << endl;
        i++;
    }

    cout << endl;
    return 0;
}