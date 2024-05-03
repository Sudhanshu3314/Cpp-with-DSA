/*  ----------------------- हरे कृष्ण  ----------------------- 
Programmer = Sudhanshu Barnwal 
Topic = Operators 
Purpose = Temperature Range: Write a program that checks if a given temperature is suitable for swimming. If the temperature is between 70 and 90 (Excluded) degrees Fahrenheit print yes, else NO. 

Date = 06/01/2024   */

#include<bits/stdc++.h>
using namespace std;

int main(){

    cout << endl ;
    int temp;
    cout << "Enter temperature for swimming : ";
    cin >> temp ;

    if( temp > 70 && temp < 90 ){
        cout << "\nYes, You can go swimming." << endl;
    }
    else{
        cout << "\nYes, You can't go for swimming." << endl;
    }
    

    cout << endl ;
    return 0;
}