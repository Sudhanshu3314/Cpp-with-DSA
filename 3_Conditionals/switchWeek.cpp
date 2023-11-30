/* Programmer = Sudhanshu Barnwal 
Purpose = Get the day of a week by entering a number
Date = 24/12/2022   */

#include<bits/stdc++.h>
using namespace std;

int main(){

    int week ;
    cout << "\nEnter the days of a week in number :- ";
    cin >> week ;

    switch ( week )
    {
    case 1:
        cout << "Monday " << endl ;
        break;
    case 2:
        cout << "Tuesday " << endl ;
        break;
    case 3:
        cout << "Wednesday " << endl ;
        break;
    case 4:
        cout << "Thursday " << endl ;
        break;
    case 5:
        cout << "Friday " << endl ;
        break;
    case 6:
        cout << "Saturday " << endl ;
        break;
    case 7:
        cout << "Sunday " << endl ;
        break;
    
    default:
        cout << "You Entered Invalid Number !!";
        break;
    }
    return 0;
}