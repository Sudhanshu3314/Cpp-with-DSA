/*  ----------------------- हरे कृष्ण  -----------------------
Programmer = Sudhanshu Barnwal
Topic = 2D Array
Purpose =
Date = 17/05/2024   */

#include <bits/stdc++.h>
using namespace std;

int main()
{

    cout << endl;

    vector<int> nums{3, 4, -1, 1};

    int n = nums.size();
    bool onepresent = false;
    // if one is missing return one
    for (int i = 0; i < n; i++)
    {
        if (nums[i] == 1)
            onepresent = true;
        if (nums[i] <= 0 || nums[i] > n)
            nums[i] = 1;
    }
    if (onepresent == false)
        return 1;
    nums.push_back(1);

    // if x is present make element at nums[x] negative
    for (int i = 0; i < n; i++)
    {
        int ind = abs(nums[i]);
        if (nums[ind] > 0)
            nums[ind] = -1 * nums[ind];
    }

    // if a index is not negative that mean that element   was  not present in array
    for (int i = 1; i <= n; i++)
    {
        if (nums[i] > 0)
        {
            cout << i << endl;
            return 0;
        }
    }
    cout << n + 1 << endl;

    cout << endl;
    return 0;
}