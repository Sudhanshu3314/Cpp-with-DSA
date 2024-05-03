/*  ----------------------- हरे कृष्ण  -----------------------
Programmer = Sudhanshu Barnwal
Topic = TypeCasting
Purpose =
Date = 06/01/2024   */

#include <bits/stdc++.h>
using namespace std;

int main()
{

    char name = 'a';
    int num = 68;

    char c = name;

    cout << endl;

    name = num; // Here , int typecast into character
    cout << name << endl;

    num = c; // Here , character typecast into int
    cout << num << endl;

    cout << endl;
    return 0;
}