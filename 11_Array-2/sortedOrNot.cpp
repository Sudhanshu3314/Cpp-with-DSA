/* Programmer = Sudhanshu Barnwal 
Purpose = Find that the numbers are sorted ( ascending order ) or not
Date = 09/01/2023   */

#include<bits/stdc++.h>
using namespace std;

int main(){

    int size ;
    cout << "\n Enter that how many number do you want to type :- ";
    cin >> size ;

    int arr[size] ;
    for (int index = 0; index < size; index++)
    {
        cout << "\n Enter the value of "  << index + 1 << " index :- ";
        cin >> arr[index] ;
    }
    bool sortedFlag = false ;
    for (int index = 1; index < size; index++)
    {
        if ( arr[index-1] <= arr[index] )
        {
            sortedFlag = true ;
        }
        else{
            sortedFlag = false;
            break;
        }
    }
    cout << sortedFlag << endl ;
    
    
    cout << endl ;
    return 0;
}