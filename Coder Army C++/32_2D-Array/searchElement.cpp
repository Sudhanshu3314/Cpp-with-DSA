/*  ----------------------- हरे कृष्ण  -----------------------
Programmer = Sudhanshu Barnwal
Topic = 2D Array
Purpose = Search Element
Date = 21/03/2024   */

#include <bits/stdc++.h>
using namespace std;

int main()
{

    cout << endl;
    int arr[4][3] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12};

    int key;
    cout << "Enter your value : ";
    cin >> key;

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (arr[i][j] == key)
            {
                cout << "Yes Present" << endl;
                return 0;
            }
        }
    }

    cout << "Not Present" << endl;
    return 0;
}