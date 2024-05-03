/*  ----------------------- हरे कृष्ण  ----------------------- 
Programmer = Sudhanshu Barnwal 
Topic = Gfg Problem
https://www.geeksforgeeks.org/problems/leap-year0943/1?utm_source=geeksforgeeks&utm_medium=ml_article_practice_tab&utm_campaign=article_practice_tab
Purpose = Leap Year
Date = 11/02/2024   */

#include<bits/stdc++.h>
using namespace std;

int main(){

    cout << endl ;

    int year;
    cout << "Enter year : ";
    cin >> year ;

    if( year % 400 == 0 || (year % 4 == 0 && year % 100 != 0 )){
        cout << year << " is Leap Year " << endl ;
    }
    else{
        cout << year << " is Common Year " << endl ;
    }

    cout << endl ;
    return 0;
}