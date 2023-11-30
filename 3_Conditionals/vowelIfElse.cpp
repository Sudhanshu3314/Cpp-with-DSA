/* Programmer = Sudhanshu Barnwal
Purpose = To know the vowels and consonants by If Else
Date = 24/12/2022   */

#include <bits/stdc++.h>
using namespace std;

int main()
{

    char ch, letter;
    cout << "\n Enter any Letter :- ";
    cin >> ch;

    letter = tolower(ch);

    if (letter == 'a' || letter == 'e' || letter == 'i' || letter == 'o' || letter == 'u')
    {
        cout << endl
             << ch << " is a Vowel." << endl;
    }
    else
    {
        cout << endl
             << ch << " is a Consonant." << endl;
    }

    return 0;
}