/* Programmer = Sudhanshu Barnwal
Topic =
Purpose =
Date = /01/2023   */

#include <bits/stdc++.h>
using namespace std;

int fact(int n)
{
    if (n == 1 || n == 0)
    {
        return 1;
    }
    else
    {
        return n * fact(n - 1);
    }
}

int combination(int num, int r)
{
    return fact(num) / (fact(r) * fact(num - r));
}

int main()
{

    int row;
    cout << "\n Enter no of rows :- ";
    cin >> row;

    cout << endl;
    for (int i = 1; i <= row; i++)
    {
        for (int j = 1; j <= row - i; j++)
        {
            cout << " "
                 << "  ";
        }
        for (int j = 1; j <= i; j++)
        {
            cout << combination(i - 1, j - 1) << "    ";
        }
        cout << endl;
    }

    cout << endl;
    return 0;
}