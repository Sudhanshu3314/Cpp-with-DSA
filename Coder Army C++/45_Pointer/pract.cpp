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
    vector<int> nums{3, 1, 4, 1, 5};
    int k = 2;
    sort(nums.begin(), nums.end());

    // 1 1 3 4 5
    // k = 2

    int count = 0;

    for (int i = 0; i < nums.size(); i++)
    {
        int search = nums[i] + k;
        int start = 0;
        int end = nums.size() - 1;
        while (start <= end)
        {
            int mid = start + (end - start) / 2;
            if (mid != i)
            {
                if (nums[mid] == search)
                {
                    count++;
                    break;
                }
                else if (nums[mid] < search)
                {
                    start++;
                }
                else if (nums[mid] > search)
                {
                    end--;
                }
            }
        }
    }

    cout << count << endl;
    return 0;
}