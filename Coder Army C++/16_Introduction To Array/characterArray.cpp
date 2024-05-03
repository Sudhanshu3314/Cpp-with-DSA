/*  ----------------------- हरे कृष्ण  -----------------------
Programmer = Sudhanshu Barnwal
Topic = Introduction to Array
Purpose =
Date = 08/12/2023   */

#include <bits/stdc++.h>
using namespace std;

int main()
{

    char character[] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};

    cout << "\nCharacters are { ";
    for (int i = 0; i < sizeof(character); i++)
    {
        if (i != sizeof(character) - 1)
            cout << character[i] << " , ";
        else if (i == sizeof(character) - 1)
            cout << character[i] << " } ";
    }

    cout << endl;
    return 0;
}