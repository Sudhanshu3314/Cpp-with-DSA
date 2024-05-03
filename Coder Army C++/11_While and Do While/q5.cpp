/*  ----------------------- हरे कृष्ण  -----------------------
Programmer = Sudhanshu Barnwal
Topic = While and Do While loop
Purpose = Print all the Capital and small letters  using a while loop. It means A-Z, then a-z.
Date = 06/01/2024   */

#include <bits/stdc++.h>
using namespace std;

int main()
{

    cout << endl;

    char letters = 'A';
    while (letters <= 'Z')
    {
        cout << letters << " ";
        letters = letters + 1;
    }

    cout << endl;
    cout << "Small letters" << endl;

    char small = 'a';
    while (small <= 'z')
    {
        cout << small << " ";
        small = small + 1;
    }

    cout << endl;
    return 0;
}