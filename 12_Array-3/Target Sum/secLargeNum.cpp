/* Programmer = Sudhanshu Barnwal
Topic = Array Manipulation
Purpose = Find the second largest number from the array
Date = 14/01/2023   */

//  In this question we used for loop three ( 3 ) times which is very time and space taken in solution but there is solution which is very optimum. So, that solution is provided in this folder only in the file of ( secLargeNum_1.cpp )  
 
#include <bits/stdc++.h>
using namespace std;

int largeElementIndex(int arr[], int size)
{

    int maxIndex = -1 ;
    int max = INT_MIN;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] > max)
        {
            maxIndex = i;
        }
    }
    return maxIndex;
}

int main()
{

    int arr[] = {1, 2, 7 ,4, 5, 7};
    int size = 6;

    int largestNoIndex = largeElementIndex(arr, size);
    int largeNo = arr[largestNoIndex];
    
    for (int i = 0; i < size; i++)
    {
        if ( arr[i] == largeNo )
        {
            arr[largestNoIndex] = INT_MIN ;
        }
    }

    int secLargeNoIndex = largeElementIndex(arr, size);

    cout << "\n Second largest number is " << arr[secLargeNoIndex] << endl ;

    cout << endl;
    return 0;
}

// 1 , 2 , 7 , 4 , 5 , 7  , here size = 6 

// 0 , 1 , 2 , 3 , 4 , 5   is indexes of above array

// so here we got index = 2 i.e. array[2] = 7 , but we also have 7 which is at array[5] and after that will be considered as a second largest number

// we need to find the second largest by logically 7 is not the second largest number

// so , first we will get the largest number's index and then we will traverse the array again to check that largest number is equal to any number which is in the array