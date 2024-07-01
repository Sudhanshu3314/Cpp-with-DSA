/*  ----------------------- हरे कृष्ण  -----------------------
Programmer = Sudhanshu Barnwal
Topic = String
Purpose = Reverse string
Date = 23/05/2024   */

#include <bits/stdc++.h>
using namespace std;

int main()
{

    cout << endl;

    string naam = "SubjectIsNonsense";

    int start = 0;
    int end = naam.size() - 1;

    while (start < end)
        swap(naam[start++], naam[end--]);

    cout << "Reversed string is " << naam << endl;

    cout << endl;
    return 0;
}