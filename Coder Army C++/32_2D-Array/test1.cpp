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

    int count = 0;
    int countBack = 0;

    for (int i = 0; i < n - 2; i++)
    {
        int val = arr[i];
        int start = i + 1;
        int end = n - 1;
        int secondEnd = end - 1;

        if (val + arr[start] + arr[start + 1] < sum)
        {
            int num = end - start;
            count = count + (num * (num + 1) / 2);
        }

        bool flag = true;

        while (start < end )
        {
            if (val + arr[start] + arr[start + 1] < sum)
            {
                if (val + arr[secondEnd] + arr[end] >= sum)
                {
                    flag = false;
                    countBack++;
                }

                if (flag)
                {
                    break;
                }

                if (start == secondEnd)
                {
                    end = end - 1;
                    secondEnd = end;
                    flag = true;
                }

                secondEnd--;
            }
            else {
                break;
            }
        }
    }

    cout << endl;
    cout << count << endl;
    cout << countBack << endl;

    cout << "Real ans : " << count - countBack << endl ;

    cout << endl;
    return 0;
}