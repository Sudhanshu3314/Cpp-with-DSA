/*  ----------------------- Hare Krishn  -----------------------
Programmer = Sudhanshu Barnwal
Topic = Bubble Sort
Purpose =
Date = 16/11/2023   */

#include <bits/stdc++.h>
using namespace std;

int countPrime(int n)
{
    int count = 0;
    for (int i = 2; i < n; i++)
    {
        bool flag = true;
        for (int j = 2; j < i; j++)
        {
            if (i % j == 0)
            {
                flag = false;
                break;
            }
        }

        if (flag)
            ++count;
    }
    return count;
}

int main()
{

    int n;
    cout << "\nEnter n : ";
    cin >> n;

    cout << countPrime(n) << endl ;

    cout << endl;
    return 0;
}