/*  ----------------------- हरे कृष्ण  -----------------------
Programmer = Sudhanshu Barnwal
Topic = Questions
Purpose = Fibonacci Series
Date = 16/02/2024   */

#include <bits/stdc++.h>
using namespace std;

int main()
{

    cout << endl;

    int n;
    cout << "Enter number till fibonacci series you want : ";
    cin >> n;

    int arr[1000]; // Constant size of array which never included any time complexity
    // int arr[1000] having time complexity O(1) not O(N) bcoz size is constant

    arr[0] = 0;
    arr[1] = 1;

    for (int i = 2; i < n; i++)
    {
        arr[i] = arr[i - 1] + arr[i - 2];
    }

    cout << endl;

    for (int i = 0; i < n; i++)
    {
        if (i != n - 1)
            cout << arr[i] << ", ";
        else
            cout << arr[i] << " ";
    }

    cout << endl;
    return 0;
}