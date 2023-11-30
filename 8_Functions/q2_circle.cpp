/* Programmer = Sudhanshu Barnwal
Purpose = Given radius of Circle.Write a function to print the area and circumference of circle
Date = 25/12/2022   */

#include <bits/stdc++.h>
using namespace std;

double pi = (float)22 /7;

float area(float rad)
{
    return pi * rad * rad;
}

float cir(float radius)
{
    return 2 * pi * radius;
}

int main()
{

    float r;
    cout << "\n Enter radius of Circle :- ";
    cin >> r;

    cout << "\n Area of Circle is " << area(r) << " sq.units "<< endl ;
    cout << "Circumference of Circle is " << cir(r) << " units" << endl ;

    return 0;
}