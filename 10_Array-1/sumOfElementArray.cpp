/* Programmer = Sudhanshu Barnwal 
Purpose = Calcualte the sum of all the elements in the given array
Date = 31/12/2022   */

#include<bits/stdc++.h>
using namespace std;

int main(){

    int size ;
    cout << "\n Enter that how many number do you want to type :- ";
    cin >> size  ;

    int sum = 0 ;
    int array[size] ;
    for (int i = 0; i < sizeof(array)/sizeof(int); i++)
    {
        cout << endl ;
        cout << "Enter the number of " << i + 1 << " index :- ";
        cin >> array[i] ;
    }
    for (int i = 0; i < sizeof(array)/sizeof(int); i++)
    {
        sum += array[i] ;
    }

    cout << "\n ----> Sum of your entered number is " << sum << endl; 
    return 0;
}