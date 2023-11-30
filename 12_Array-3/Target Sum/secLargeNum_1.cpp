/* Programmer = Sudhanshu Barnwal
Topic = Array Manipulation
Purpose = Find the second largest number from the array
Date = 14/01/2023   */

// Approach of this program
// here we have arr[8] = { 1 , 3 , 6 , 9 , 2, 7 , 9 , 5 } ;
// whose indexes is        0   1   2   3   4  5   6   7

// NOTE :- Here we have to same largest that's why we need to safe in doing this programming and we have to find second largest number

// first we have to find the maximum value and that will be stored in max
// ----->  first loop will run and if ( array[i] > max ) max = array[i]

// ----> second loop will run for getting the second largest number by storing the value in integer data type variable secondMax by doing this

// if ( array[i] > secondMax && array[i] != max )  secondMax = array[i]

#include <bits/stdc++.h>
using namespace std;

int secLargeNum(int arr[], int size)
{

    int max = INT_MIN;
    int secondMax = INT_MIN;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    for (int i = 0; i < size; i++)
    {
        if (arr[i] > secondMax && arr[i] != max)
        {
            secondMax = arr[i];
        }
    }
    return secondMax;
}

int main()
{

    int size;

    cout << "\n Enter number that how many values do you want to type :- ";
    cin >> size ;
    
    int arr[size];
    for (int i = 0; i < size; i++)
    {
        cout << "\n Enter the value of " << i + 1 << " index :- ";
        cin >> arr[i];
    }

    cout << "\n -----> Second largest number is " << secLargeNum(arr, size) << endl;
    cout << endl;
    return 0;
}