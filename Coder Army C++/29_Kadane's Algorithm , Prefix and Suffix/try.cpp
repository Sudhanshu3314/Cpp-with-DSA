/*  ----------------------- हरे कृष्ण  -----------------------
Programmer = Sudhanshu Barnwal
Topic = Questions
Purpose =
Date = 17/02/2024   */

#include <bits/stdc++.h>
using namespace std;

int main()
{

    cout << endl;

    int N = 45;
    vector<int> arr{45, 8, 4, 9, 8, 8, 9, 7, 7, 9, 4, 2, 5, 0, 2, 7, 9, 0, 4, 9, 7, 3, 9, 2, 9, 6, 5, 7, 8, 0, 9, 4, 9, 1, 9, 6, 8, 9, 3, 3, 4, 7, 8, 5, 4, 5};

    unsigned long long int sum = 0;

    for (int i = 0; i < N; i++)
    {
        sum = sum + (arr[i] * pow(10, N - 1 - i));
    }

    sum = sum + 1;

    vector<int> ans;

    while (sum > 0)
    {
        unsigned long long int n = sum % 10;
        ans.push_back(n);
        sum = sum / 10;
    }

    reverse(ans.begin(), ans.end());

    for (int i = 0; i < N; i++)
    {
        cout << ans[i] << " ";
    }

    cout << endl;
    return 0;
}