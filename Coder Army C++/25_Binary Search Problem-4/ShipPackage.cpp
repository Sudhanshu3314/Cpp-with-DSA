/*  ----------------------- Hare Krishn  -----------------------
Programmer = Sudhanshu Barnwal
Topic = Binary Search Problem
Purpose = Ship Package
Date = 09/12/2023   */

#include <bits/stdc++.h>
using namespace std;

int minimumWeightCarryByShip(int array[], int size, int days)
{

    int start = 0, end = 0, mid, ans;
    for (int i = 0; i < size; i++)
    {
        if (start < array[i])
            start = array[i];
        end += array[i];
    }

    while (start <= end)
    {
        mid = start + (end - start) / 2;
        int countDays = 1;
        int countWeight = 0;
        for (int i = 0; i < size; i++)
        {
            countWeight += array[i];

            if (countWeight > mid)
            {
                countWeight = array[i];
                countDays++;
            }
        }
        if (countDays > days)
            end = mid - 1;
        else if (countDays <= days)
        {
            ans = mid;
            start = mid + 1;
        }
    }

    return ans;
}

int main()
{

    int weight[] = {3, 2, 2, 4, 1, 4};
    int size = sizeof(weight) / sizeof(weight[0]);

    cout << "\n Weight of package { ";

    for (int i = 0; i < size; i++)
    {
        if (i != size - 1)
            cout << weight[i] << " , ";
        else if (i == size - 1)
            cout << weight[i] << " } " << endl;
    }

    cout << endl;

    int numDays;
    cout << "\nEnter no. of Days : ";
    cin >> numDays; // numDays = 3

    cout << endl;
    cout << minimumWeightCarryByShip(weight, size, numDays) << endl;

    cout << endl;
    return 0;
}