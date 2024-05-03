/*  ----------------------- हरे कृष्ण  -----------------------
Programmer = Sudhanshu Barnwal
Topic = Questions
https://leetcode.com/problems/nim-game/description/
Purpose = NIM GAME
Date = 14/02/2024   */

#include <bits/stdc++.h>
using namespace std;

int main()
{

    cout << endl;
    int num;
    cout << "Enter no : ";
    cin >> num;

    if (num % 4 == 0)
    {
        cout << "Win" << endl;
    }
    else
    {
        cout << "Lose" << endl;
    }

    cout << endl;
    return 0;
}