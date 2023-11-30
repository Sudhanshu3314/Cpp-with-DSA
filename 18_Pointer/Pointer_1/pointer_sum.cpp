/* Programmer = Sudhanshu Barnwal
Topic =
Purpose = Adding number by pointer
Date = /01/2023   */

#include <bits/stdc++.h>
using namespace std;

int main()
{

    int x, y;
    cout << "\nEnter first Number : ";
    cin >> x;
    cout << "\nEnter second Number : ";
    cin >> y; // taking input of first and second Number

    int *fNum = &x; // &x fetches address of x variable and store it in ptr fNum
    int *sNum = &y; // &y fetches address of y variable and store it in ptr sNum

    int resultSum;               // resultSum has garbage right now
    int *resultAdd = &resultSum; // resultAdd pointer store the address of result Sum

    /*

     *fNum = 10 ;
     *sNum = 20 ;
     *fNum + *sNum = *resultAdd = 30
     *resultAdd = &resultSum ;
     so , resultSum becomes 30

    */

    *resultAdd = *fNum + *sNum;
    cout << "\nSum Of First & second Number is " << resultSum << " " << *resultAdd << endl;

    cout << endl;
    return 0;
}