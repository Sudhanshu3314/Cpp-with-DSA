/*  ----------------------- हरे कृष्ण  -----------------------
Programmer = Sudhanshu Barnwal
Topic = Insertion Sort
Purpose = Insertion Sort Algorithm to sort the array of char in ascending order.

Date = 21/03/2024   */

#include <bits/stdc++.h>
using namespace std;

int main()
{

    cout << endl;

    cout << endl;
    char ch[] = {'d', 'h', 'a', 'x', 'b', 'e', 'z', 'm', 'l', 'q'};

    int size = sizeof(ch);
    for (int i = 0; i < size; i++)
    {
        cout << ch[i] << " ";
    }

    cout << endl;

    int count = 0;
    for (int i = 0; i < size - 1; i++)
    {
        count++;
        cout << endl;
        cout << count << ") ";

        for (int j = i + 1; j > 0; j--)
        {
            if (ch[j - 1] > ch[j])
                swap(ch[j - 1], ch[j]);
            else
                break;

            // Now, Printing that how sorting is happen
            for (int k = 0; k < size; k++)
            {
                cout << ch[k] << " ";
            }
            cout << endl;
        }
    }

    cout << endl;

    for (int i = 0; i < size; i++)
    {
        cout << ch[i] << " ";
    }

    cout << endl;
    return 0;
}