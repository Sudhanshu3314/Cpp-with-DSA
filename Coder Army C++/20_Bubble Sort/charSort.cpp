/*  ----------------------- हरे कृष्ण  -----------------------
Programmer = Sudhanshu Barnwal
Topic = Selection Sort
Purpose = Bubble Sort Algorithm to sort the array of char in ascending order.

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

    for (int i = 0; i < size - 1; i++)
    {
        bool flag = true;
        for (int j = 1; j < size - i; j++)
        {
            if (ch[j - 1] > ch[j])
            {
                swap(ch[j - 1], ch[j]);
                flag = false;
            }
        }
        if (flag)
            break;
    }

    cout << endl;

    for (int i = 0; i < size; i++)
    {
        cout << ch[i] << " ";
    }

    cout << endl;
    return 0;
}