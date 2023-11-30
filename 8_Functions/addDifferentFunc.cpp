/* Programmer = Sudhanshu Barnwal
Purpose = Add a number using by different function
Date = 25/12/2022   */

#include <bits/stdc++.h>
using namespace std;

int add(int num1, int num2)
{
    return num1 + num2;
}

int add(int num1, int num2, int num3);
float add(float num1, float num2);

int main()
{

    int a = 4;
    int b = 7;

    float x = 3.3, y = 3.6;

    cout << add(a, b) << endl;
    cout << add(a, b, 5) << endl;
    cout << add(x, y) << endl;

    return 0;
}

int add(int num1, int num2, int num3)
{
    return num1 + num2 + num3;
}

float add(float num1, float num2)
{
    return num1 + num2;
}