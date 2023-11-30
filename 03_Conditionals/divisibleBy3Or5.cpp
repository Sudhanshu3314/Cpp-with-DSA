/* Programmer = Sudhanshu Barnwal
Purpose = Number is divisible by 3 Or 5 or not
Date = 24/12/2022   */

#include <bits/stdc++.h>
using namespace std;

int main()
{

    int num;
    cout << "\nEnter any Number :- ";
    cin >> num;

    if (num % 3 == 0 || num % 5 == 0)
    {
        cout << num << " is either divisible by 3 or 5." << endl;
    }
    else
    {
        cout << num << " is neither divisible by 3 nor 5." << endl;
    }
    return 0;
}