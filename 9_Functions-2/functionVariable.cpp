/* Programmer = Sudhanshu Barnwal 
Purpose = Local variables and global variables
Date = 25/12/2022   */

#include<bits/stdc++.h>
using namespace std;

int p = 5 ;

void print(){
    cout << p << endl ;
}

int main(){

    int p = 7 ;
    cout << p << endl ; // 7 printed bcoz local variable takes precedence to global variable

    cout << p++ << endl; // 8 

    print(); // 5 printed bcoz for void function globally scope variable is valid no local variable is declared in that void print() function

    cout << ::p << endl ; // This :: ( double colon is scope resolution which helps to print the global variable then also when local variable is exist in that scope )
    return 0;
}