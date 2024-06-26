/*  ----------------------- हरे कृष्ण  -----------------------
Programmer = Sudhanshu Barnwal
Topic = Binary Search Problem
Purpose = Painter Partition
Date = 09/12/2023   */

#include <bits/stdc++.h>
using namespace std;

int painterPartition(int wall[], int size, int numPainter)
{

    int start = 0;
    int end = 0, mid, ans;

    for (int i = 0; i < size; i++)
    {
        if (start < wall[i])
            start = wall[i];
        end = end + wall[i];
    }

    while (start <= end)
    {
        mid = start + (end - start) / 2;
        int totalTime = 0, countPainter = 1;
        for (int i = 0; i < size; i++)
        {
            totalTime += wall[i];
            if (totalTime > mid)
            {
                totalTime = wall[i];
                countPainter++;
            }
        }
        if (countPainter > numPainter)
        {
            start = mid + 1;
        }
        else
        {
            ans = mid;
            end = mid - 1;
        }
    }

    return ans;
}

int main()
{

    int wallLength[] = {5, 10, 30, 20, 15};
    // 1 length = takes 1 unit of time
    // find minimum time can taken if no of painter allocated to some total length to each and every painter
    int size = sizeof(wallLength) / sizeof(wallLength[0]);

    cout << "\n Wall lengths are { ";

    for (int i = 0; i < size; i++)
    {
        if (i != size - 1)
            cout << wallLength[i] << " , ";
        else if (i == size - 1)
            cout << wallLength[i] << " } " << endl;
    }

    cout << endl;

    int numPainter; // numPainter = 3;
    cout << "\nEnter no. of painters : ";
    cin >> numPainter;

    cout << endl;

    cout << painterPartition(wallLength, size, numPainter) << endl; // ans = 35

    cout << endl;
    return 0;
}