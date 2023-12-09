/*  ----------------------- Hare Krishn  -----------------------
Programmer = Sudhanshu Barnwal
Topic = Binary Search Problem
Purpose = Book Allocation
Date = 07/12/2023   */

#include <bits/stdc++.h>
using namespace std;

int bookAllocation(int array[], int size, int chatra)
{
    int start = 0, end = 0, mid, ans;
    for (int i = 0; i < size; i++)
    {
        start = max(start, array[i]);
        end += array[i];
    }

    if (chatra == 1)
        return end;

    while (start <= end)
    {
        mid = start + (end - start) / 2;
        int bookPages = 0;
        int student = 1;
        for (int i = 0; i < size; i++)
        {
            bookPages += array[i];
            if (bookPages > mid)
            {
                student++;
                bookPages = array[i];
            }
        }
        if (student <= chatra)
        {
            ans = mid;
            end = mid - 1;
        }
        else if( student > chatra )
            start = mid + 1;
    }

    return ans  ;
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