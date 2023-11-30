/* Programmer = Sudhanshu Barnwal
Purpose = Array concept
Date = 25/12/2022   */

#include <bits/stdc++.h>
using namespace std;

int main()
{

    int array[] = {1, 2, 3, 4, 5};

    cout << "\n Accessing the value of array like this " << endl;
    cout << array[0] << endl;
    cout << array[1] << endl;
    cout << array[2] << endl;
    cout << array[3] << endl;
    cout << array[4] << endl;

    cout << "\nSize of array is " << sizeof(array) << endl;

    cout << "\n Length of array is " << sizeof(array) / sizeof(array[0]) << endl;

    int array2[4];
    cout << endl;
    cout << array2[0] << endl; // it will give me garbage value because I didn't store any value and that garbage value is coming from RAM

    cout << array2[1] << endl; // it will give me garbage value because I didn't store any value and that garbage value is coming from RAM

    cout << array2[2] << endl; // it will give me garbage value because I didn't store any value and that garbage value is coming from RAM

    cout << array2[3] << endl; // it will give me garbage value because I didn't store any value and that garbage value is coming from RAM

    cout << endl;

    int size = sizeof(array) / sizeof(int);
    // for loop
    for (int idx = 0; idx < size; idx++)
    {
        // cout << array[idx] << endl ;
    }

    cout << endl;
    // for each loop
    for (int element : array)
    {
        cout << element << endl;
    }

    cout << endl;
    // while loop
    int index = 0;
    while (index < size)
    {
        // cout << array[index] << endl;
        index++;
    }

    // char vowels[5] ;
    // for (int indx = 0; indx < 5; indx++)
    // {
    //     cin >> vowels[indx];
    // }

    char vowels[5];
    for (char &ele : vowels)
    {
        cin >> ele;
    }

    for (char ele : vowels)
    {
        cout << ele << " ";
    }

    cout << endl;
    for (int indx = 0; indx < 5; indx++)
    {
        cout << vowels[indx] << " ";
    }

    return 0;
}