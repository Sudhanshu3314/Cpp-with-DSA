/*  ----------------------- हरे कृष्ण  -----------------------
Programmer = Sudhanshu Barnwal
Topic = Trapping Rain Water
Purpose = Approach of ( Auxillary Space Complexity : O(N) , Time Complexity : O(N) );
Date = 06/01/2024   */

#include <bits/stdc++.h>
using namespace std;

int main()
{

    vector<int> height{4, 2, 0, 5, 2, 6, 2, 3};
    int size = height.size();

    vector<int> leftMax(size);
    vector<int> rightMax(size);

    int max = INT_MIN;

    for (int i = 0; i < size; i++)
    {
        max = (height[i] > max) ? height[i] : max;
        leftMax[i] = max;
    }

    max = INT_MIN;

    for (int i = size - 1; i >= 0; i--)
    {
        max = (height[i] > max) ? height[i] : max;
        rightMax[i] = max;
    }

    cout << "\nLeftmax is ";
    for (int i = 0; i < size; i++)
    {
        cout << leftMax[i] << " ";
    }

    cout << "\nRightMax is ";
    for (int i = 0; i < size; i++)
    {
        cout << rightMax[i] << " ";
    }

    cout << endl;
    cout << "\nHeight of building is ";
    for (int i = 0; i < size; i++)
    {
        cout << height[i] << " ";
    }

    cout << endl;
    int trapWater = 0;

    for (int j = 0; j < size; j++)
    {
        if (min(leftMax[j], rightMax[j]) > height[j])
            trapWater = trapWater + (min(leftMax[j], rightMax[j]) - height[j]);
    }

    cout << trapWater << endl;

    cout << endl;
    return 0;
}