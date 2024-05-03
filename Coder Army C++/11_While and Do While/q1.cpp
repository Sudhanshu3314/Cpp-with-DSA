/*  ----------------------- हरे कृष्ण  -----------------------
Programmer = Sudhanshu Barnwal
Topic = While and Do while Loop
Purpose = Take a number n from the user and print all the even numbers between 1 and n(inclusive). Do this using while and do while loop separately.

Date = 06/01/2024   */

#include <bits/stdc++.h>
using namespace std;

int main()
{

    cout << endl;

    int n;
    cout << "Enter any Number : ";
    cin >> n;

    int i = 2;
    while (i <= n)
    {
        cout << i << endl;
        i = i + 2;
    }
    // By using do while loop
    i = 0;

    cout << endl;
    cout << "By Do while loop " << endl;

    do
    {
        i = i + 2;
        cout << i << endl;
    } while (i <= n - 2);

    cout << endl;
    return 0;
}