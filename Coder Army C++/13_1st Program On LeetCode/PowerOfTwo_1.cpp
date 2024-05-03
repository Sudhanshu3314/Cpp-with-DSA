/*  ----------------------- हरे कृष्ण  -----------------------
Programmer = Sudhanshu Barnwal
Topic = Leetcode Problem
https://leetcode.com/problems/power-of-two/description/
Purpose = Power Of Two ( First Solution )
Date = 11/02/2024   */

#include <bits/stdc++.h>
using namespace std;

int main()
{

    cout << endl;
    int num;
    cout << "Enter any Number : ";
    cin >> num;

    int pow = 1;
    int count = 0;

    while (num > pow)
    {
        ++count;
        pow = pow * 2;
        if (pow == num)
        {
            cout << "\nThis number is coming in Power Of Two " << endl;
            cout << 2 << " raised to " << count << " is " << num << endl;
            return 0;
        }
    }
    cout << "\nThis number is NOT coming in Power Of Two " << endl;

    cout << endl;
    return 0;
}