/*  ----------------------- हरे कृष्ण  -----------------------
Programmer = Sudhanshu Barnwal
Topic = While and Do While loop
Purpose = Given a number n, print the corresponding month of it. For n=1, print Jan, n=2, print Feb…, if the user puts any invalid number, don’t do anything. (Use switch here)

Date = 06/01/2024   */

#include <bits/stdc++.h>
using namespace std;

int main()
{

    cout << endl;
    int n;
    cout << "Enter month in number : ";
    cin >> n;

    switch (n)
    {
    case 1:
        cout << "January" << endl;
        break;

    case 2:
        cout << "February" << endl;
        break;

    case 3:
        cout << "March" << endl;
        break;

    case 4:
        cout << "April" << endl;
        break;

    case 5:
        cout << "May" << endl;
        break;

    case 6:
        cout << "June" << endl;
        break;

    case 7:
        cout << "July" << endl;
        break;

    case 8:
        cout << "August" << endl;
        break;

    case 9:
        cout << "September" << endl;
        break;

    case 10:
        cout << "October" << endl;
        break;

    case 11:
        cout << "November" << endl;
        break;

    case 12:
        cout << "December" << endl;
        break;

    default:
        cout << "Invalid month in number " << endl;
        break;
    }

    cout << endl;
    return 0;
}