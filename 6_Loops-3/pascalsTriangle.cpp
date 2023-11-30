/* Programmer = Sudhanshu Barnwal
Purpose = Pascal's Triangle by using loop
Date = 29/01/2023   */

#include <bits/stdc++.h>
using namespace std;

int fact(int n)
{
    int fact = 1;
    for (int i = 1; i <= n ; i++)
    {
        fact *= i ;
    }
    
    return fact;
}

int Combination(int num, int r)
{
    return fact(num) / (fact(r) * fact(num - r));
}

int main()
{

    int row;
    startProgram:
    cout << "\n Enter no. of Row :- ";
    cin >> row;

    cout << endl;

    for (int i = 1; i <= row; i++)
    {
        for (int j = 1; j <= row - i; j++)
        {
            cout << "   ";
        }
        for (int j = 1; j <= i; j++)
        {
            cout << Combination(i - 1, j - 1) << "     ";
        }
        cout << endl;
    }

    goto startProgram;
    cout << endl;
    return 0;
}