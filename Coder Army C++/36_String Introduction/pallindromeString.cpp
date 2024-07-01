/*  ----------------------- हरे कृष्ण  -----------------------
Programmer = Sudhanshu Barnwal
Topic = String
Purpose = Pallindrome String

Pallindrome means real data and reverse of it must be equal to each other

Date = 23/05/2024   */

#include <bits/stdc++.h>
using namespace std;

int main()
{

    cout << endl;

    string naam = "naman";
    // naam = "sudhanshu";

    int start = 0;
    int end = naam.size() - 1;

    while (start < end)
    {
        if (naam[start] != naam[end])
        {
            cout << naam << " is NOT a Pallindrome string" << endl;
            return 0;
        }
        start++;
        end--;
    }

    cout << naam << " is a Pallindrome string" << endl;
    cout << endl;
    return 0;
}