/* Programmer = Sudhanshu Barnwal
Topic = Recursion
Purpose = Power of number using recursion method
Date = 20/09/2023   */

#include <bits/stdc++.h>
using namespace std;

int powerNum(int n, int power)
{
    if (power == 0)
        return 1;

    return (n * powerNum(n, (power - 1)));
}

int main()
{

    int num;
    cout << "\nEnter any number : ";
    cin >> num;

    int pow;
    cout << "\n Enter power of number : ";
    cin >> pow;

    cout << "\n -------> " << num << " raised to " << pow << " is " << powerNum(num, pow) << endl;

    cout << endl;
    return 0;
}