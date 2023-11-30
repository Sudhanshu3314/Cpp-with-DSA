/* Programmer = Sudhanshu Barnwal
Topic = Target Sum
Purpose = Rotate the given array by k steps
e.g. arr[5] = { 1 , 2 , 3 , 4 , 5 }
if k = 2 and k = 7
swiped array is { 4, 5 , 1 , 2 , 3 }
by vector function
Date = 22/07/2023   */

#include <bits/stdc++.h>
using namespace std;

int main()
{

    int size;
    cout << "\nEnter that how many number do you want to type : ";
    cin >> size;

    vector<int> v(size);
    for (int i = 0; i < size; i++)
    {
        cout << "\nEnter the value of " << i << " index : ";
        cin >> v[i];
    }

    for (int ele : v)
    {
        cout << ele << " ";
    }
    cout << endl;

    int rotate;
    cout << "\nEnter the value of rotate : ";
    cin >> rotate;
    rotate = rotate % v.size();

    reverse(v.begin(), v.end());
    for (int ele : v)
    {
        cout << ele << " ";
    }
    cout << endl;

    reverse(v.begin(), v.begin() + rotate);
    for (int ele : v)
    {
        cout << ele << " ";
    }
    cout << endl;
    reverse(v.begin() + rotate , v.end());
    for (int ele : v)
    {
        cout << ele << " ";
    }

    cout << endl;
    return 0;
}