/*  ----------------------- Hare Krishn  -----------------------
Programmer = Sudhanshu Barnwal
Topic = Bubble Sort
Purpose = Sort Character
Date = 16/11/2023   */

#include <bits/stdc++.h>
using namespace std;

void selectionSort(char array, int size)
{

    for (int i = 0; i < size - 1; i++)
    {
        int index = i;
        for (int j = i + 1; j < size; j++)
        {
            if (int(array[i]) < int(array[index]))
            {
                index = j;
            }
        }
        swap(int(array[i]), int(array[index]));
    }
}

int main()
{

    char character[9] = {'f', 'o', 'e', 'a', 'p', 'd', 'b', 'h', 'c'};

    int size = sizeof(character);
    cout << "{ ";
    for (int i = 0; i < size; i++)
    {
        if (i != size - 1)
            cout << character[i] << " , ";
        else
            cout << character[i] << " } " << endl;
    }

    selectionSort(character, size);
    cout << endl;
    for (int i = 0; i < size; i++)
    {
        if (i != size - 1)
            cout << character[i] << " , ";
        else
            cout << character[i] << " } " << endl;
    }
    cout << endl;
    return 0;
}