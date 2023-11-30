/* Programmer = Sudhanshu Barnwal
Purpose = Write a Program to calculate marks to grades. Follow the conversion rule as given below
Date = 24/12/2022   */

#include <bits/stdc++.h>
using namespace std;

int main()
{

    int marks;
    cout << "\n Enter your marks :- ";
    cin >> marks;

    if (marks < 0)
    {
        cout << "\n Marks never be negative.";
    }
    else if (marks > 100)
    {
        cout << "\n Total marks of Exam is 100. So, above 100 marks is invalid.";
    }
    else
    {
        if (marks <= 100 && marks >= 90)
        {
            cout << "\n You got Grade A+" << endl;
        }
        else if (marks < 90 && marks >= 80)
        {
            cout << "\n You got Grade A" << endl;
        }
        else if (marks < 80 && marks >= 70)
        {
            cout << "\n You got Grade B+" << endl;
        }
        else if (marks < 70 && marks >= 60)
        {
            cout << "\n You got Grade B" << endl;
        }
        else if (marks < 60 && marks >= 50)
        {
            cout << "\n You got Grade C" << endl;
        }
        else if (marks < 50 && marks >= 40)
        {
            cout << "\n You got Grade D" << endl;
        }
        else if (marks < 40 && marks >= 30)
        {
            cout << "\n You got Grade E" << endl;
        }
        else if (marks < 30 && marks >= 0)
        {
            cout << "\n You got Grade F" << endl;
        }
    }
    return 0;
}