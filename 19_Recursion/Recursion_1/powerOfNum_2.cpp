/* Programmer = Sudhanshu Barnwal
Topic = Recursion
Purpose = Optimize solution of Power of number using recursion method
Date = 20/09/2023   */

#include <bits/stdc++.h>
using namespace std;

int powerNum(int n, int power)
{
    if (power == 0)
    {
        return 1;
    }
    if (power % 2 != 0)
    {
        int res = powerNum(n, power / 2);
        return n * (res * res);
    }
    else
    {
        int res = powerNum(n, power / 2);
        return res * res;
    }
}

int main()
{
sp:
    int num, pow;
    cout << "\nEnter any number : ";
    cin >> num;
    cout << "\nEnter power of number : ";
    cin >> pow;

    cout << "\n"
         << num << " raised to " << pow << " is " << powerNum(num, pow) << endl;

    cout << endl;
    goto sp;
    return 0;
}