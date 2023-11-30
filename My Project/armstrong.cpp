/*  ----------------------- Hare Krishn  -----------------------
Programmer = Sudhanshu Barnwal
Topic = Recursion
Purpose =
Date = /09/2023   */

#include <bits/stdc++.h>
using namespace std;

int countDigits(int n)
{
    int count = 0;
    while (n)
    {
        count++;
        n /= 10;
    }
    return count;
}

int power(int n, int p)
{
    int val = 1;
    for (int i = 1; i <= p; i++)
    {
        val *= n;
    }
    return val;
}

bool armstrong(int n, int count)
{
    int sum = 0;
    int num = n;
    int rem;
    while (n > 0)
    {
        rem = n % 10;
        n /= 10;
        int powValue = power(rem, count);
        sum = sum + powValue;
    }
    if (sum == num)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{

    int num;
    cout << "\nEnter num : ";
    cin >> num;

    cout << endl;
    int digitsCount = countDigits(num);

    if (armstrong(num, digitsCount))
    {
        cout << num << " is an Armstrong Number." << endl;
    }
    else
    {
        cout << num << " is NOT an Armstrong Number." << endl;
    }

    cout << endl;
    return 0;
}