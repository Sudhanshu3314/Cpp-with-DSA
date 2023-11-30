/* Programmer = Sudhanshu Barnwal
Topic =
Purpose =
Date = /08/2023   */

#include <bits/stdc++.h>
using namespace std;

void letterFirstLastOccurenceIndex(string sentence, int *ptrFirstIdx, int *ptrSecondIdx, char keyChar)
{
    for (int i = 0; i < sentence.length(); i++)
    {
        if (sentence[i] == keyChar)
        {
            *ptrFirstIdx = i;
            break;
        }
    }
    for (int i = sentence.length() - 1; i >= 0; i--)
    {
        if (sentence[i] == keyChar)
        {
            *ptrSecondIdx = i;
            break;
        }
    }
    cout << *ptrFirstIdx << " " << *ptrSecondIdx << endl;
}

int main()
{

    string str = "aaabbcccddbbbccsdfga";

    int firstIndex = -1;
    int lastIndex = -1;

    char key;
    cout << "\nEnter any char : ";
    cin >> key;

    letterFirstLastOccurenceIndex(str, &firstIndex, &lastIndex, key);

    cout << endl;
    return 0;
}