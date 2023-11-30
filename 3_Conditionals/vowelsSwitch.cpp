/* Programmer = Sudhanshu Barnwal
Purpose = To know the vowels and consonants by Switch Case
Date = 24/12/2022   */

#include <bits/stdc++.h>
using namespace std;

int main()
{

    char ch, letter ;
    cout << "\n Enter any Letter :- ";
    cin >> ch;

    letter = tolower(ch) ;

    switch (letter)
    {
    case 'a':
        cout << ch << " is a Vowel." << endl;
        break;
    case 'e':
        cout << ch << " is a Vowel." << endl;
        break;
    case 'i':
        cout << ch << " is a Vowel." << endl;
        break;
    case 'o':
        cout << ch << " is a Vowel." << endl;
        break;
    case 'u':
        cout << ch << " is a Vowel." << endl;
        break;

    default:
        cout << ch << " is a Consonant." << endl;
        break;
    }
    return 0;
}