/*  ----------------------- Hare Krishn  -----------------------
Programmer = Sudhanshu Barnwal
Topic = Recursion
Purpose =
Date = /09/2023   */

#include <bits/stdc++.h>
using namespace std;

int power(int n, int p)
{
    int val = 1;
    for (int i = 1; i <= p; i++)
    {
        val *= n;
    }
    return val;
}

int main()
{

    int num;
    cout << "\nEnter any Number : ";
    cin >> num;

    cout << endl;

    for (int i = 2; i <= num; i++)
    {
        for (int j = 2; j <= num; j++)
        {
            if (power(i, j) == power(j, i))
            {
                cout << "i : " << i << " "
                     << "j : " << j << " ----> " << power(i, j) << endl;
            }
        }
    }

    cout << endl;
    return 0;
}