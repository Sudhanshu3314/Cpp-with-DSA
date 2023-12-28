/*  ----------------------- Hare Krishn  -----------------------
Programmer = Sudhanshu Barnwal
Topic = Binary Search Problem
Purpose = Book Allocation
Date = 07/12/2023   */

#include <bits/stdc++.h>
using namespace std;

int bookAllocation(int array[], int size, int chatra)
{
    int start = 0;
    int end = 0;
    int ans;

    for (int i = 0; i < size; i++)
    {
        start = max(start, array[i]);
        end = end + array[i];
    }

    if (chatra == 1)
        return end;
        
    while (start <= end)
    {
        int mid = start + (end - start) / 2;
        int pages = 0, studentCount = 1;
        for (int i = 0; i < size; i++)
        {
            pages += array[i];
            if (pages > mid)
            {
                studentCount++;
                pages = array[i];
            }
        }
        if (studentCount <= chatra)
        {
            ans = mid;
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }
    }
    return ans;
}

int main()
{

    int page[] = {12, 34, 67, 90};

    int size = sizeof(page) / sizeof(page[0]);

    cout << "\nBook Pages are allocated in array : { ";

    for (int i = 0; i < size; i++)
    {
        if (i != size - 1)
            cout << page[i] << " , ";
        else
            cout << page[i] << " } " << endl;
    }

    int numStudent; // numStudent = 2;
    cout << "\nEnter no. of student : ";
    cin >> numStudent;

    cout << endl;
    cout << bookAllocation(page, size, numStudent) << endl; // ans = 113

    cout << endl;
    return 0;
}