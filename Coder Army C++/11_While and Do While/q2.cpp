/*  ----------------------- हरे कृष्ण  -----------------------
Programmer = Sudhanshu Barnwal
Topic = While and Do While loop
Purpose =
Date = 06/01/2024   */

#include <bits/stdc++.h>
using namespace std;

int main()
{

    cout << endl;

    int n;
    cout << "Enter number : ";
    cin >> n;

    // int i = 1;
    // int fact = 1;
    // while (i <= n)
    // {
    //     fact *= i;
    //     i++;
    // }

    // cout << fact << endl ;

    int i = 1;
    int fact = 1 ;
    do
    {
        i++;
        fact = fact * i;
    } while (i < n );

    cout << fact << endl ;
    

    cout << endl;
    return 0;
}