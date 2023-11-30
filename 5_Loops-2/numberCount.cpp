/* Programmer = Sudhanshu Barnwal 
Purpose = Counting the number of digits 
Date = 24/12/2022   */

#include<bits/stdc++.h>
using namespace std;

int main(){

    int num ;
    cout << "\nEnter any Number :- ";
    cin >> num ;

    int count = 0;
    while ( num > 0 )
    {
        num /= 10 ;
        count++;
    }
    cout << "\nYou have entered total " << count << " digits number." << endl;
    return 0;
}