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
    int arr[] = {1, 2, 3, 4, 5};
    int N = 5;
    int K = 5;

    int min = INT_MAX;
    int sum = 0;

    for (int i = 0; i < N; i++)
    {
        if (min > arr[i])
        {
            min = arr[i];
        }
        sum = sum + arr[i];
    }

    int start = min;
    int end = sum;

    int ans;

    while (start <= end)
    {
        int mid = start + (end - start) / 2;

        int countSplit = 0;

        int sumSubArray = 0;

        for (int i = 0; i < N; i++)
        {
            sumSubArray = sumSubArray + arr[i];
            if (i != N - 1 && sumSubArray + arr[i + 1] > mid && sumSubArray <= mid)
            {
                countSplit++;
                sumSubArray = arr[i];
            }
            else if (i == N - 1 && sumSubArray <= mid)
            {
                countSplit++;
            }
        }

        if (countSplit < K)
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