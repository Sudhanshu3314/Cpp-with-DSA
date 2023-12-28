/*  ----------------------- Hare Krishn  -----------------------
Programmer = Sudhanshu Barnwal
Topic = Binary Search Problem
Purpose = Aggresive Cow
Date = 16/12/2023   */

#include <bits/stdc++.h>
using namespace std;

int minimumDistanceBetweenCows(vector<int> &stalls, int cows, int size)
{

    int ans;
    sort(stalls.begin(), stalls.end());
    int start = stalls[0];
    int end = stalls[size - 1] - stalls[0];

    while (start <= end)
    {
        int mid = start + (end - start) / 2;

        int countCows = 1;
        int position = stalls[0];
        for (int i = 0; i < size; i++)
        {
            if (position + mid <= stalls[i])
            {
                countCows++;
                position = stalls[i];
            }
        }

        if (countCows < cows)
        {
            end = mid - 1;
        }
        else if (countCows >= cows)
        {
            ans = mid;
            start = mid + 1;
        }
    }

    return ans;
}

int main()
{

    vector<int> stalls{10, 1, 2, 7, 5}; // in metres this are stalls
    int size = stalls.size();

    // 1 2 5 7 10

    // 1 to 9
    // start = 1 / 3 / 4 / 5 ( Here , loop exit )
    // end = 9 / 4
    // mid = 5 / 2 / 3 / 4

    /* 1st = 1  ,  2nd =  5  ,   3rd =  10   */ // Three cows

    // ans = 4

    cout << "\n Stalls distances are { ";
    for (int i = 0; i < size; i++)
    {
        if (i != size - 1)
            cout << stalls[i] << " , ";
        else if (i == size - 1)
            cout << stalls[i] << " } ";
    }

    cout << endl;
    cout << endl;

    int cows;
    cout << "Enter no. of cows : ";
    cin >> cows;

    cout << endl;
    cout << endl;
    cout << "Minimum Distance can be " << minimumDistanceBetweenCows(stalls, cows, size) << " metres " << endl;
    ;

    cout << endl;
    return 0;
}