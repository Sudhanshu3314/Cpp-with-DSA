/* Programmer = Sudhanshu Barnwal
Purpose = Find the difference between the sum of elements at even indices to the sum of elements at odd indices
Date = 09/01/2023   */

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
        cout << "\n Enter the value of " << index << " index :- ";
        cin >> arr[index];
    }

    int sumEvenIndicesNo = 0;
    int sumOddIndicesNo = 0;
    for (int index = 0; index < size; index++)
    {
        if (index % 2 == 0)
            sumEvenIndicesNo += arr[index];
        else
            sumOddIndicesNo += arr[index];
    }

    cout << "\n ----> Difference of Even indices number and Odd indices number is " << (sumEvenIndicesNo - sumOddIndicesNo) << endl;

    cout << endl;
    return 0;
}