/*  ----------------------- हरे कृष्ण  -----------------------
Programmer = Sudhanshu Barnwal
Topic = 2D Array
Purpose = Trapping rain water
Date = 16/05/2024   */

#include <bits/stdc++.h>
using namespace std;

int main()
{

    cout << endl;
    vector<int> height{4, 2, 0, 5, 2, 6, 2, 3};
    int trapWater = 0;
    int size = height.size();

    // 0 1 0 2 1 0 1 3 2 1 2 1
    // 0 1 2 3 4 5 6 7 8 9 10 11

    int max = INT_MIN;
    int index = -1;
    for (int i = 0; i < size; i++)
    {
        if (height[i] > max)
        {
            max = height[i];
            index = i;
        }
    }

    int maxHeight = height[0];

    for (int i = 1; i < index; i++)
    {
        if (maxHeight < height[i])
        {
            maxHeight = height[i];
        }
        if (maxHeight >= height[i])
        {
            trapWater = trapWater + (maxHeight - height[i]);
        }
    }

    maxHeight = height[size - 1];

    for (int i = size - 2; i > index; i--)
    {
        if (maxHeight < height[i])
        {
            maxHeight = height[i];
        }
        if (maxHeight >= height[i])
        {
            trapWater = trapWater + (maxHeight - height[i]);
        }
    }
    cout << trapWater << endl;
    cout << endl;
    return 0;
}