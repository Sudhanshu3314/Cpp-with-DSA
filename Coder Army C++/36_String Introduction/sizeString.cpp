/*  ----------------------- हरे कृष्ण  -----------------------
Programmer = Sudhanshu Barnwal
Topic = String
Purpose = Size of stirng
Date = 23/05/2024   */

#include <bits/stdc++.h>
using namespace std;

int main()
{

    cout << endl;

    string naam = "sudhanshu";

    int size = 0;

    while (naam[size] != '\0')
    {
        size++;
    }

    cout << "Size of naam : " << size << endl;

    cout << endl;
    return 0;
}