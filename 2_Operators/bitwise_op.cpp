/* Programmer = Sudhanshu Barnwal 
Purpose = Using Bitwise Operator
Date = 23/12/2022   */

#include<bits/stdc++.h>
using namespace std;

int main(){

    int a = 4 , b = 32 ;
    /* Left Shift operator: Shifts the bits of left by n positions, filling in with zeros
    Right shift operator : shifts right and fills up empty spaces with zeroes
    8 -> binary representation is 00001000
    8<<2 will give us 0001000 which means we are multiplying 8 X 2 raised to n 
    8>>2 will give us 00000100 which means we are doing 8 / 2 raised to n 
    9->binary represenation is 00001001 but after performing
    
    gives all ones except for last two digits. So when you perform this operation on any number
    then only those bits that have corresponding bit set to one would be considered while others remain as they
    other than power of 2 then result may not be correct.*/

    cout << ( a << 2 ) << endl ; // 16 
    cout << ( b >> 4 ) << endl ; // 2

    int c = 5 ; // 0101

    int d = 6 ; // 0110
    cout << (c & d) << endl ; // 4
    cout << (c | d) << endl ; // 7
    cout << (c ^ d) << endl ; // 3


    return 0;
}