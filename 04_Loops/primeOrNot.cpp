/* Programmer = Sudhanshu Barnwal 
Purpose = Tell if the number in the input is Prime or not 
Date = 24/12/2022   */

#include<bits/stdc++.h>
using namespace std;

int main(){

    int num ;
    cout << "\nEnter any Number :- ";
    cin >> num ;

    cout << endl; 
    for (int i = 2; i <= num ; i++)
    {
        int twofact = 2;
        for (int j = 1; j <= i ; j++)
        {
            if ( i % j == 0 )
            {
                twofact--;
            }
        }
        if ( twofact == 0 )
        {
            cout << "* " << i << " is a Prime number" << endl ;
        }
        else{
            cout << "-> " << i << " is a Composite number" << endl ;
        }
    }
    
    return 0;
}