/* Programmer = Sudhanshu Barnwal
Purpose = Write a C++ program to check whether a Number can be expressed as a Sum of Two Prime Numbers.
Date = 31/12/2022   */

#include <bits/stdc++.h>
using namespace std;

int main()
{

    int num;
    cout << "\n Enter any Positive integer :- ";
    cin >> num;

    cout << endl;

    for (int i = 2 ; i <= num ; i++ )
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
            if ((num - i) > 1)
            {
                int twofact_second = 2;
                for (int no = 1; no <= (num - i); no++)
                {
                    if ((num - i) % no == 0)
                    {
                        twofact_second--;
                    }
                }
                if (i + (num - i) == num && twofact_second == 0 )
                {
                    cout << " -----> " << i << " + " << num - i << " = " << num << endl;
                }
            }
        }
    }

    cout << endl ;

    return 0;
}