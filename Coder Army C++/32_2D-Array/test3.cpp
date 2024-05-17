/*  ----------------------- हरे कृष्ण  -----------------------
Programmer = Sudhanshu Barnwal
Topic = 2D Array
Purpose =
Date = 21/03/2024   */

#include <bits/stdc++.h>
using namespace std;

int main()
{

    cout << endl;

    int candies[] = {5, 6, 4, 10, 10, 1, 1, 2, 2, 2};
    int size = 10;
    int k = 9;
    long long sum = 0;


    for (int i = 0; i < size; i++)
    {
        sum = sum + candies[i];
    }

    int start = 1;
    long long end = sum / k;

    if (sum < k)
    {
        return 0;
    }

    int ans;

    while (start <= end)
    {
        long long mid = start + (end - start) / 2;
        long long countChild = 0;
        for (int i = 0; i < size; i++)
        {
            long long countCandiesDistribution = candies[i] / mid;
            countChild = countChild + countCandiesDistribution;
        }
        if (countChild > k)
        {
            start = mid + 1;
        }
        else
        {
            ans = mid;
            end = mid - 1;
        }
    }

    cout << ans << endl;

    cout << endl;
    return 0;
}