/*  ----------------------- Hare Krishn  -----------------------
Programmer = Sudhanshu Barnwal
Topic = Bubble Sort
Purpose =
Date = 16/11/2023   */

#include <bits/stdc++.h>
using namespace std;

int trap(vector<int> &arr)
{
    int size = arr.size();
    int count = 0;
    int max = INT_MIN;
    int index = -1;
    int indexSec = 0;

    for (int i = 0; i < size; i = indexSec)
    {
        bool greatFlag = false;
        if (arr[i] > 0)
        {
            greatFlag = true;
            max = arr[i];
            index = i;
        }
        if (i != size - 1 && greatFlag)
        {
            bool flag = false;
            for (int j = index + 1; j < size; j++)
            {
                if (arr[j] >= max)
                {
                    flag = true;
                    indexSec = j;
                    break;
                }
                else if (j == size - 1)
                {
                    indexSec = indexSec + 1;
                }
            }
            if (flag)
            {
                for (int k = index + 1; k < indexSec; k++)
                {
                    int countBox = arr[index] - arr[k];
                    count += countBox;
                }
            }
            if (indexSec == size - 1)
                break;
        }
    }
    return count;
}

int main()
{

    vector<int> vec{0,1,0,2,1,0,1,3,2,1,2,1};
    cout << endl;
    cout << trap(vec) << endl;

    cout << endl;
    return 0;
}