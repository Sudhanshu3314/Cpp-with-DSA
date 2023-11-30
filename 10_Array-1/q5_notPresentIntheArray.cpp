/* Programmer = Sudhanshu Barnwal
Purpose = Given an array containing n distinct integers in the range [0,n] (inclusive of both 0 and n) (inclusive of
both 0 and n). Find and return the only number of the range that is not present in the array. Here 1<n<101.

Ex: arr=[3,0,1]
Output: 2
n=3, thus the range will be [0,3]
Ex: arr = [8,6,4,2,3,5,0,1]
Output: 7
n=8, thus the range will be [0,8]

Date = 31/12/2022   */

#include <bits/stdc++.h>
using namespace std;

int sumOfNatural( int n ){
    int sum = 0 ;
    for (int i = 0; i <= n ; i++)
    {
        sum += i ;
    }
    return sum ;
}


int notPresentInTheArray( int array[] , int size ){
    int max = array[0] ;
    for (int index = 1; index < size ; index++)
    {
        if ( array[index] > max )
        {
            max = array[index] ;
        }
    }
    
    int arraySum = 0 ;
    for (int index = 0; index < size ; index++)
    {
        arraySum += array[index] ;
    }
    
    return (sumOfNatural(max) - arraySum) ;
}

int main()
{

    int arr1[] = { 3 , 0 , 1 } ;
    int arr2[] = { 8 , 6 , 4 , 2 , 3 , 5 , 0 , 1 } ;

    int size1 = sizeof(arr1)/sizeof(int);
    int size2 = sizeof(arr2)/sizeof(int);

    cout << "\n The Number is not Present in the Array 1 i.e. " << notPresentInTheArray(arr1 , size1) << endl ;
    cout << "\n The Number is not Present in the Array 2 i.e. " << notPresentInTheArray(arr2 , size2) << endl ;
    return 0;
}