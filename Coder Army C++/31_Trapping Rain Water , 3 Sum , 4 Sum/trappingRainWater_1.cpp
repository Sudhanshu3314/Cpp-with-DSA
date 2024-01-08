/*  ----------------------- Hare Krishn  -----------------------
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

    leftMax[0] = 0;
    rightMax[size - 1] = 0;

    for (int i = 1; i < size; i++)
        leftMax[i] = max(leftMax[i - 1], height[i - 1]);

    for (int i = size - 2; i >= 0; i--)
        rightMax[i] = max(rightMax[i + 1], height[i + 1]);

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
    cout << endl;
    int trapWater = 0;

    for (int j = 1; j < size - 1; j++)
    {
        int minHeight = min(leftMax[j], rightMax[j]);
        if (minHeight > height[j])
        {
            trapWater = trapWater + (minHeight - height[j]);
        }
    }

    cout << trapWater << endl;

    cout << endl;
    return 0;
}