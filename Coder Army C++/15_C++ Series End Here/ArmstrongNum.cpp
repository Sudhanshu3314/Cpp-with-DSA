/*  ----------------------- हरे कृष्ण  -----------------------
Programmer = Sudhanshu Barnwal
Topic = Questions
Purpose = Armstrong Number
Date = 12/02/2024   */

#include <bits/stdc++.h>
using namespace std;

int countDigits(int n)
{
    int count = 0;
    while (n > 0)
    {
        n = n / 10;
        ++count;
    }
    return count;
}

int power(int num, int p)
{
    int mul = 1;
    for (int i = 1; i <= p; i++)
    {
        mul = mul * num;
    }
    return mul;
}

bool armstrongNum(int n)
{
    int count = countDigits(n);

    int sum = 0;
    int number = n;

    while (n > 0)
    {
        int rem = n % 10;
        sum = sum + (power(rem, count));
        n = n / 10;
    }

    if (sum == number)
    {
        return 1;
    }
    else
    {
        return 0;
    }
    return 0;
}

int main()
{

    cout << endl;
    int num;
    cout << "Enter any number : ";
    cin >> num;

    if (armstrongNum(num))
    {
        cout << num << " is an Armstrong Number. " << endl;
    }
    else
    {
        cout << num << " is NOT an Armstrong Number. " << endl;
    }

    cout << endl;
    return 0;
}