/*  ----------------------- Hare Krishn  -----------------------
Programmer = Sudhanshu Barnwal
Topic = Recursion
Purpose =
Date = /09/2023   */

#include <bits/stdc++.h>
using namespace std;

int rootInSq(int num)
{
    if (num < 0)
    {
        return 0;
    }
    for (int i = 0; i >= 0; i++)
    {
        int nextVal = (i + 1);
        if (num == i * i || ((num > i * i) && (num < nextVal * nextVal)))
        {
            return i;
        }
    }
    return 0;
}

int main()
{

    int num;
    cout << "\nEnter any Number : ";
    cin >> num;

    cout << endl;
    cout << rootInSq(num) << endl;

    cout << endl;
    return 0;
}