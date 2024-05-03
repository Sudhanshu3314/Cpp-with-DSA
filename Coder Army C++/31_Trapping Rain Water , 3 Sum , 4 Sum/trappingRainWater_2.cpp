/*  ----------------------- हरे कृष्ण  -----------------------
Programmer = Sudhanshu Barnwal
Topic = Trapping Rain Water
Purpose = Approach of ( Auxillary Space Complexity : O(1) , Time Complexity : O(N) );
Date = 06/01/2024   */

#include <bits/stdc++.h>
using namespace std;

int main()
{

    vector<int> height{4, 2, 0, 5, 2, 6, 2, 3};
    int size = height.size();

    int maxHeight = INT_MIN;
    int index = -1;
    for (int i = 0; i < size; i++)
    {
        if (maxHeight < height[i])
        {
            index = i;
            maxHeight = height[i];
        }
    }

    int trapWater = 0;

    int maxLeft = 0;
    for (int i = 0; i < index; i++)
    {
        if (maxLeft < height[i])
        {
            maxLeft = height[i];
        }
        else if (maxLeft > height[i])
        {
            trapWater = trapWater + (maxLeft - height[i]);
        }
    }

    int maxRight = 0;
    for (int i = size - 1; i > index; i--)
    {
        if (maxRight < height[i])
        {
            maxRight = height[i];
        }
        else if (maxRight > height[i])
        {
            trapWater = trapWater + (maxRight - height[i]);
        }
    }
    cout << endl;

    cout << trapWater << endl;

    cout << endl;
    return 0;
}