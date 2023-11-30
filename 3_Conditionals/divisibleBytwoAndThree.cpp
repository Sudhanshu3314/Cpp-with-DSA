/* Programmer = Sudhanshu Barnwal
Purpose = Number is divisible by 2 & 3 or not
Date = 24/12/2022   */

#include <bits/stdc++.h>
using namespace std;

int main()
{

    int num;
    cout << "\nEnter any Number :- ";
    cin >> num;

    if (num % 2 == 0 && num % 3 == 0)
    {
        cout << num << " is divisible by 2 and 3." << endl;
    }
    else
    {
        cout << num << " is not divisible by 2 and 3." << endl;
    }

    return 0;
}