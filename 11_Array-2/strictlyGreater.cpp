/* Programmer = Sudhanshu Barnwal
Purpose = Count the number of elements strictly greater than value x
Date = 08/01/2023   */

#include <bits/stdc++.h>
using namespace std;

int main()
{

    cout << "\n Program = Count the number of elements strictly greater than value x \n";

    int size;
    cout << "\n Enter that how many number do you want to enter :- ";
    cin >> size;

    vector<int> v(size);
    for (int i = 0; i < v.size(); i++)
    {
        cout << "\n Enter the value of " << i + 1 << " index :- ";
        cin >> v[i];
    }

    cout << endl;
    int x, countElement = 0;
    cout << "\n Enter the value of x :- ";
    cin >> x;

    int vectorSize = v.size() - 1 ;

    cout << "\n Value of vector i.e. { ";
    for (int i = 0; i < v.size(); i++)
    {
        if (v[i] > x && i != v.size()-1)
        {
            cout << v[i] << ", ";
            countElement++;
        }
        else if(v[i] > x && i == v.size()-1){
            cout << v[i] << " } ";
            countElement++;
        }
    }

    cout << "\n \n ----> The number of value in vector are greater than your " << x << " is " << countElement << endl;

    cout << endl;
    return 0;
}