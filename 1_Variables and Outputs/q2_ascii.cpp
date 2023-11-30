/* Programmer = Sudhanshu Barnwal 
Purpose = Print the ASCII value of character 'U'
Date = 23/12/2022   */

#include<bits/stdc++.h>
using namespace std;

int main(){

    for (int i = 0; i < 255; i++)
    {
        cout << "The ASCII value of character " << char(i+1) << " is Alt + " << i + 1 << endl ;
    }
    
    
    return 0;
}