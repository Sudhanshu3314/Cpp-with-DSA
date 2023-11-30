/* Programmer = Sudhanshu Barnwal
Purpose = Take the input in array from user and print the maximum value and minimum value out of all that elements of an array
Date = 31/12/2022   */

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int size;
    cout << "\n Enter that how many number do you want to type :- ";
    cin >> size ;

    cout << endl; 
    int array[size] ;
    for (int i = 0; i < sizeof(array)/sizeof(int); i++)
    {
        cout << "\n Enter the element in " << i + 1 << " index :- " ;
        cin >> array[i] ;
    }

    int max = array[0];
    int min = array[0];

    for (int i = 1; i < sizeof(array)/sizeof(int); i++)
    {
        if ( array[i] > max )
        {
            max = array[i] ;
        }
        if ( array[i] < min )
        {
            min = array[i] ;
        }
    }
    
    cout << "\n ---> Maximum value in your array is " << max << endl ;
    cout << "\n ---> Minimum value in your array is " << min << endl ;

    return 0;
}