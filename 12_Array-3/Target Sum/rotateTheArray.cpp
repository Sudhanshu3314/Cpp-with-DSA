/* Programmer = Sudhanshu Barnwal
Topic = Array Manipulation
Purpose = Rotate the given array by k steps 
e.g. arr[5] = { 1 , 2 , 3 , 4 , 5 }
if k = 2 and k = 7
swiped array is { 4, 5 , 1 , 2 , 3 }

Date = 15/01/2023   */

#include <bits/stdc++.h>
using namespace std;

int main()
{

    int size;
    int j = 0;

    cout << "\n Enter that how many numbers do you want to type :- ";
    cin >> size ;

    int array[size] ;
    for (int i = 0; i < size; i++)
    {
        cout << "\n Enter the value of " << i + 1 << " index :- ";
        cin >> array[i] ;
    }

    int rotArray[size];
    int rotate ;

    cout << "\n --> Enter that number at k steps you want to rotate :- ";
    cin >> rotate ;
    
    rotate = rotate % size;

    for (int i = size - rotate; i < size; i++)
    {
        rotArray[j++] = array[i];
    }

    for (int i = 0; i <= rotate; i++)
    {
        rotArray[j++] = array[i] ;
    }

    for (int i = 0; i < size ; i++)
    {
        cout << rotArray[i] << " " ;
    }
    
    cout << endl;
    return 0;
}