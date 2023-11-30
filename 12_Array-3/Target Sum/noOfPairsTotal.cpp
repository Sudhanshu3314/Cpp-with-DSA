/* Programmer = Sudhanshu Barnwal
Topic :- Target sum
Purpose = Find the total number of pairs in the array whose sum is equal to the given value x ;
e.g. arr[5] = { 1 , 5 , 3 , 6 , 2 }

if x = 7 ;
print 6 + 1 = 7 and 5 + 2 = 7
if x = 8 ;
print 6 + 2 = 8 and 5 + 3 = 8

Date = 10/01/2023   */

#include <bits/stdc++.h>
using namespace std;

int main()
{

    int size;
    cout << "\n Enter that how many no. do you want to type :- ";
    cin >> size;

    int array[size];
    for (int i = 0; i < size; i++)
    {
        cout << "\n Enter the value of " << i + 1 << " index :- ";
        cin >> array[i];
    }

    int x;
    cout << "\n Enter the value of x :- ";
    cin >> x;

    int pairs = 0;

    cout << endl;

    for (int i = 0; i < size; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            if (array[i] + array[j] == x)
            {
                cout << ++pairs << ") "
                     << " ----> " << array[i] << " + " << array[j] << " = " << x << endl;
            }
        }
    }
    cout << "\n No. of Pairs are " << pairs << " whose sum is " << x << endl;

    cout << endl;
    return 0;
}