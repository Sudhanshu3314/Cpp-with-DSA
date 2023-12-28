/*  ----------------------- Hare Krishn  -----------------------
Programmer = Sudhanshu Barnwal
Topic = Binary Search Problem
Purpose = Ship Package
Date = 09/12/2023   */

#include <bits/stdc++.h>
using namespace std;

int maximumWeightInShipPackage(int weight[], int size, int days)
{

    int ans;
    int start = 0, end = 0;
    for (int i = 0; i < size; i++)
    {
        start = max(start, weight[i]);
        end = end + weight[i];
    }

    while (start <= end)
    {
        int mid = start + (end - start) / 2;
        int totalWeight = 0, countDays = 1;
        for (int i = 0; i < size; i++)
        {
            totalWeight = totalWeight + weight[i];
            if (totalWeight > mid)
            {
                countDays++;
                totalWeight = weight[i];
            }
        }
        if (countDays > days)
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
            ans = mid;
        }
    }
    
    return ans;
}

int main()
{

    int weight[] = {3, 2, 2, 2, 4, 1, 4};

    int size = sizeof(weight) / sizeof(weight[0]);

    cout << "\n In Ship Package weights are { ";

    for (int i = 0; i < size; i++)
    {
        if (i != size - 1)
            cout << weight[i] << " , ";
        else if (i == size - 1)
            cout << weight[i] << " } ";
    }

    cout << endl;
    int days;
    cout << "\nEnter no. of days : ";
    cin >> days;

    cout << "\nWe need to carry maximum " << maximumWeightInShipPackage(weight, size, days) << " kg "
         << " weights " << endl;

    cout << endl;
    return 0;
}