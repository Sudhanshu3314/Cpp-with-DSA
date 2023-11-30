/* Programmer = Sudhanshu Barnwal
Purpose = Identifying Prime Number and Composite Number
Date = 10/01/2023   */

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int num;
    cout << "\n Enter any Number :- ";
    cin >> num;

    cout << endl ;
    int twofact = 2;
    for (int i = 1; i <= num; i++)
    {
        if (num % i == 0)
        {
            cout << "----> " << num/i << " x " << i << " = " << num << endl; 
            twofact--;
        }
    }
    if ( twofact == 0 )
    {
        cout << "\n ---->" << num << " is a Prime Number." << endl ;
    }
    else{
        cout << "\n ---->" << num << " is a Composite Number." << endl ;
    }

    cout << endl;
    return 0;
}