/*  ----------------------- हरे कृष्ण  -----------------------
Programmer = Sudhanshu Barnwal
Topic = Loop
Purpose = Print all Odd numbers from 1 to n, take n as an input from the user.

Date = 06/01/2024   */

#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n;
    cout << "\nEnter any number : ";
    cin >> n;

    cout << endl;
    for (int i = 1; i <= n; i = i + 2)
    {
        cout << i << endl;
    }

    cout << endl;
    return 0;
}