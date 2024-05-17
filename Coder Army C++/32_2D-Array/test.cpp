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

    vector<int> arr{30, 8, 23, 6, 10, 9, 31, 7, 19, 20, 1, 33, 21, 27, 28, 3, 25, 26};
    int sum = 86;
    int n = arr.size();

    for (int i = 0; i < n - 1; i++)
    {
        bool flag = true;
        for (int j = 1; j < n - i; j++)
        {
            if (arr[j] < arr[j - 1])
            {
                swap(arr[j], arr[j - 1]);
                flag = false;
            }
        }
        if (flag)
        {
            break;
        }
    }

    cout << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    int count = 0;
    int countBack = 0;

    for (int i = 0; i < n; i++)
    {
        int val = arr[i];
        int start = i + 1;
        int end = n - 1;
        int secondEnd = n - 2;
        bool flag = true;

        while (start < end && start <= secondEnd)
        {
            if (val + arr[start] + arr[end] < sum)
            {
                if (val + arr[secondEnd] + arr[end] < sum && flag)
                {
                    int num = end - start;
                    cout << endl;
                    cout << val << " + " << arr[secondEnd] << " + " << arr[end] << " < " << sum << endl;
                    count = count + (num * (num + 1) / 2);
                    flag = false;
                    cout << endl;
                    cout << " ----------> " << num * (num + 1) / 2 << " - " << countBack << " = " << num * (num + 1) / 2 - countBack << endl;
                    if (secondEnd == start)
                    {
                        end--;
                        secondEnd = end - 1;
                    }
                }

                else if (val + arr[secondEnd] + arr[end] >= sum)
                {
                    countBack++;
                    cout << endl;
                    cout << val << " + " << arr[secondEnd] << " + " << arr[end] << " >= " << sum << endl;
                    secondEnd--;
                }

                else if (val + arr[secondEnd] + arr[end] < sum)
                {
                    cout << endl;
                    cout << val << " + " << arr[secondEnd] << " + " << arr[end] << " >= " << sum << endl;
                    break;
                }
            }

            else if (val + arr[start] + arr[end] >= sum)
            {
                end--;
            }
        }
    }

    cout << endl;
    cout << count << endl;
    cout << countBack << endl;

    cout << endl;
    return 0;
}