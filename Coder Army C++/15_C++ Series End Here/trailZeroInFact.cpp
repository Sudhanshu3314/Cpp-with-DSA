/*  ----------------------- Hare Krishn  -----------------------
Programmer = Sudhanshu Barnwal
Topic = Questions
https://www.geeksforgeeks.org/problems/trailing-zeroes-in-factorial5134/1?utm_source=geeksforgeeks&utm_medium=ml_article_practice_tab&utm_campaign=article_practice_tab
Purpose = Trail zero in factorial
Date = 14/02/2024   */

#include <bits/stdc++.h>
using namespace std;

int main()
{

    cout << endl;
    int num;
    cout << "Enter no : ";
    cin >> num;

    int count = 0;

    while (num > 4)
    {
        count = count + (num / 5);
        num = num / 5;
    }

    cout << count << endl;

    cout << endl;
    return 0;
}