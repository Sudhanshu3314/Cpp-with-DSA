/* Programmer = Sudhanshu Barnwal
Purpose = Sum of all Digits
Date = /01/2023   */

#include <bits/stdc++.h>
using namespace std;

int main()
{

    int num;

    cout << "\n Enter any Number :- ";
    cin >> num; // 5678

    int sum = 1;
    int count = 0;
    int newNumber = num;
    while (num > 0)
    {
        num = num / 10;
        count++;
    }
    int digits;

    for (int i = count; i >= 1; i--)
    {
        digits = newNumber / pow(10, i - 1);
        newNumber = newNumber - digits*(pow(10, i - 1));
        sum += digits;
    }
    cout << "Sum of all digits is " << sum << endl ;

    cout << endl;
    return 0;
}