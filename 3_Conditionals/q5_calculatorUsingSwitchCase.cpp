/* Programmer = Sudhanshu Barnwal
Purpose = Create a calculator using switch statement to perform addition , subtraction , multiplication and division
Date = 24/12/2022   */

#include <bits/stdc++.h>
using namespace std;

int main()
{

    char op;
    float num1, num2;
    cout << "\nEnter an operator (+ , - , / , * ) :- ";
    cin >> op;
    cout << "\n Enter first Number :- ";
    cin >> num1;
    cout << "\n Enter second Number :- ";
    cin >> num2;

    switch (op)
    {
    case '+':
        cout << num1 << " + " << num2 << " = " << num1 + num2 << endl;
        break;
    case '-':
        cout << num1 << " - " << num2 << " = " << num1 - num2 << endl;
        break;
    case '/':
        cout << num1 << " / " << num2 << " = " << num1 / num2 << endl;
        break;
    case '*':
        cout << num1 << " x " << num2 << " = " << num1 * num2 << endl;
        break;

    default:
        cout << "Your Entered Operator is Invalid." << endl;
        break;
    }
    return 0;
}