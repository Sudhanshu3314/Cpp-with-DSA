/*  ----------------------- Hare Krishn  ----------------------- 
Programmer = Sudhanshu Barnwal 
Topic = Loop 
Purpose = Print all numbers from 1 to n, which is divisible by 4. Take n as an input from the user.

Date = 06/01/2024   */

#include<bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cout << "\nEnter any number : ";
    cin >> n;

    cout << endl;
    for (int i = 4; i <= n; i = i + 4 ) 
    {
        cout << i << endl;
    }

    cout << endl ;
    return 0;
}