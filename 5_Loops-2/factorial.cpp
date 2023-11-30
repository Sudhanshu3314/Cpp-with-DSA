/* Programmer = Sudhanshu Barnwal 
Purpose = Print the nth factorial number 
Date = 24/12/2022   */

#include<bits/stdc++.h>
using namespace std;

int main(){

    int num ;
    cout << "\nEnter any Number :- ";
    cin >> num ;
    

    int fact = 1 , n = num ;
    for (int i = 1 ; num >= i ; num-- )
    {
        fact *= num ;
    }
    cout << "\n The factorial of " << n << " is " << fact << endl; 
    return 0;
}