/*  ----------------------- Hare Krishn  -----------------------
Programmer = Sudhanshu Barnwal
Topic = Questions 
Purpose = Convert 'a' to 'A'
Date = 12/02/2024   */

#include <bits/stdc++.h>
using namespace std;

char convert(char ch)
{
    return (ch - 'a' + 'A');
}

int main()
{

    cout << endl;
    char character;
    cout << "Enter any small Character : ";
    cin >> character;

    cout << convert(character) << endl;

    cout << endl;
    return 0;
}