/* Programmer = Sudhanshu Barnwal
Topic = Recursion
Purpose = Sum of digits using recursion method
Date = 17/09/2023   */

#include <bits/stdc++.h>
using namespace std;

int sumOfDigits(int num)
{
    if (num >= 0 && num <= 9)
        return num;
    // int ansMod = num % 10 ;
    // num = num / 10 ;

    return (num % 10) + sumOfDigits(num / 10);
}

int main()
{

    int number;
    cout << "\nEnter number : ";
    cin >> number;

    cout << "\n Sum of digits of number " << number << " is " << sumOfDigits(number) << endl;

    cout << endl;
    return 0;
}