/* Programmer = Sudhanshu Barnwal 
Topic = Target sum
Purpose = Given Q queries , check if the given number is present in the array or not 

Note : Value of all the elements in the array is less than 10 to the power 5 
Date = 22/07/2023   */

#include<bits/stdc++.h>
using namespace std;

int main(){

    int size ;

    cout << "\nEnter that how many numbers do you want to type : ";
    cin >> size ;

    vector<int> v(size);
    for (int i = 0; i < size; i++)
    {
        cout << "\nEnter the value of " << i << " index : ";
        cin >> v[i];
    }

    const int N = 1e5 + 10 ;

    vector<int> freq(N,0);

    for (int i = 0; i < size ; i++)
    {
        freq[v[i]]++;
    }

    int NoOfQuery ;
    cout << "\nEnter no. of queries want to give : ";
    cin >> NoOfQuery ;

    while ( NoOfQuery-- )
    {
        int queryEle;
        cout << "\nEnter query : " ;
        cin >> queryEle ;
        cout << freq[queryEle] << " times present in vector " << endl ;
    }
    
    cout << endl ;
    return 0;
}