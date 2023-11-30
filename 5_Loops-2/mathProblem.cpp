/* Programmer = Sudhanshu Barnwal 
Purpose = Find the sum of the series i.e. 1 - 2 + 3 - 4 + 5 - 6 .... n 
Date = 24/12/2022   */

#include<bits/stdc++.h>
using namespace std;

int main(){

    int num ; 
    cout << "\nEnter any Number :- " ;
    cin >> num ;
    
    int ans = 0 ;
    for (int i = 1; i <= num ; i++)
    {
        if ( i % 2 == 0 )
        {
            ans -= i ; // ans = ans - i ( subtract even number )
        }
        else {
            ans += i ; // ans = ans + i ( add odd number )
        }
    }
    cout << "\nSum of Odd and difference Even number till " << num << " is " << ans << endl ;
    
    return 0;
}