/* Programmer = Sudhanshu Barnwal
Topic = Array Manipulation
Purpose = Find the unique number in a given Array where all the elements are being repeated twice with one value being unique .

e.g. arr[5] = { 1 , 2 , 3 , 1 , 2 }
here, unique number is 3

Date = 12/01/2023  */

#include <bits/stdc++.h>
using namespace std;

int main()
{

    int size;
    cout << "\n Enter that how many number do you want to enter :- ";
    cin >> size;

    int arr[size];
    for (int index = 0; index < size; index++)
    {
        cout << "\n Enter the value of " << index + 1 << " index :- ";
        cin >> arr[index];
    }

    for (int i1 = 0; i1 < size; i1++)
    {
        for (int i2 = i1 + 1; i2 < size; i2++)
        {
            if (arr[i1] == arr[i2])
            {
                arr[i1] = arr[i2] = 0;
            }
        }
    }

    int sum = 0;

    for (int index = 0; index < size; index++)
    {
        sum += arr[index];
    }
    cout << "\n ----> Unique Number is " << sum << endl;

    return 0;
}