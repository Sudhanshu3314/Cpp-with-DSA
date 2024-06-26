/*  ----------------------- हरे कृष्ण  -----------------------
Programmer = Sudhanshu Barnwal
Topic = Selection Sort
Purpose = Selection Sort Algorithm to sort the array of char in ascending order.

Date = 21/03/2024   */

#include <bits/stdc++.h>
using namespace std;

int main()
{

    cout << endl;
    char ch[] = {'d', 'h', 'a', 'x', 'b', 'e', 'z', 'm', 'l', 'q'};

    int size = sizeof(ch);
    for (int i = 0; i < size; i++)
    {
        cout << ch[i] << " ";
    }
    cout << endl ;

    for (int i = 0; i < size - 1; i++)
    {
        int index = i;
        for (int j = i + 1; j < size; j++)
        {
            if (ch[index] > ch[j])
                index = j;
        }
        cout << endl;
        cout << i + 1 << ") ";

        for (int k = 0; k < size; k++)
        {
            cout << ch[k] << " ";
        }

        swap(ch[index], ch[i]);
    }

    cout << endl;
    cout << endl;

    for (int i = 0; i < size; i++)
    {
        cout << ch[i] << " ";
    }

    cout << endl;
    return 0;
}