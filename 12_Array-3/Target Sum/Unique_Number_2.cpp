/* Programmer = Sudhanshu Barnwal
Topic =
Purpose =
Date = /01/2023   */

#include <bits/stdc++.h>
using namespace std;

int main()
{

    int size;
    cout << "\nEnter that how many number do you want to type : ";
    cin >> size;

    int arr[size];
    for (int i = 0; i < size; i++)
    {
        cout << "\nEnter the value of index " << i << " : ";
        cin >> arr[i];
    }

    for (int i = 0; i < size; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            if (arr[i] == arr[j])
            {
                arr[i] = arr[j] = -1;
            }
        }
    }
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " " ;
    }
    
    cout << "\nUnique Number in your given Array i.e. ";

    for (int i = 0; i < size; i++)
    {
        if (arr[i] != -1)
            cout << arr[i] << " ";
    }

    cout << endl;
    return 0;
}