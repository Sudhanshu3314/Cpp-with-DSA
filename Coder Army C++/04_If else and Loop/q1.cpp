/*  ----------------------- हरे कृष्ण  -----------------------
Programmer = Sudhanshu Barnwal
Topic = If else
Purpose = Two numbers are given, print the bigger number, It is given that both numbers can’t be the same.

Date = 06/01/2024   */

#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n1, n2;
    cout << "\nEnter first number : ";
    cin >> n1;
    cout << "\nEnter second number : ";
    cin >> n2;

    cout << endl;
    bool flag = (n1 > n2) ? 1 : 0;

    if (flag)
    {
        cout << "The larger number is : " << n1 << endl;
    }
    else
    {
        cout << "The larger number is : " << n2 << endl;
    }

    cout << endl;
    return 0;
}