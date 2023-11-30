/* Programmer = Sudhanshu Barnwal
Topic = Array Manipulation
Purpose = Find the unique number in a given Array where all the elements are being repeated twice with one value being unique .

e.g. arr[5] = { 1 , 2 , 3 , 1 , 2 }
here, unique number is 3

Date = 10/01/2023   */

#include <bits/stdc++.h>
using namespace std;

int main()
{

    int size;

    cout << "\n Enter that how many number do you want to type :- ";
    cin >> size;

    int arr[size];
    for (int index = 0; index < size; index++)
    {
        cout << "\n Enter the value of " << index + 1 << " index :- ";
        cin >> arr[index];
    }

    int sum = 0;
    int totalOfArray = 0;
    int unique;

    for (int index = 0; index < size; index++)
    {
        totalOfArray += arr[index];
    }

    for (int index1 = 0; index1 < size; index1++)
    {
        for (int index2 = index1 + 1; index2 < size; index2++)
        {
            if (arr[index1] == arr[index2])
            {
                sum += arr[index1];
            }
        }
    }

    unique = totalOfArray - 2 * sum;

    cout << "\n Unique Number from your array i.e. " << unique << endl;

    cout << endl;
    return 0;
}