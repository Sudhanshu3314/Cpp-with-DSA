/* Programmer = Sudhanshu Barnwal
Topic = Recursion
Purpose =
Date = /09/2023   */

// strcmp( arr1 , arr2 )
// if both string is same then both value is zero i.e. equal
// if arr1 > arr2 then this return +positive value > 0
// if arr1 < arr2 then this return -negative value < 0

#include <bits/stdc++.h>
using namespace std;

void selectionSortFruit(char fruit[][60], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        int min_index = i;
        for (int j = i + 1; j < n; j++)
        {
            if (strcmp(fruit[min_index], fruit[j]) > 0)
            {
                min_index = j;
            }
        }
        // place the minimum element at the begining by lexicographically 
        if (min_index != i)
        {
            swap(fruit[min_index], fruit[i]);
        }
    }
    return;
}

int main()
{

    char fruit[][60] = {"papaya", "watermelon", "lime", "apple", "mango", "kiwi", "orange"};

    int n = sizeof(fruit) / sizeof(fruit[0]);

    selectionSortFruit(fruit, n);
    cout << endl;

    for (int i = 0; i < n; i++)
    {
        cout << fruit[i] << " ";
    }

    cout << endl;
    return 0;
}