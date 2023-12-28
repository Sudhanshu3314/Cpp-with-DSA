/*  ----------------------- Hare Krishn  -----------------------
Programmer = Sudhanshu Barnwal
Topic = Two Pointer
Purpose = Two Sum By Two Pointer Approach
Date = 23/12/2023   */

#include <bits/stdc++.h>
using namespace std;

vector<int> twoSum(int array[], int aim, int size)
{
    int start = 0;
    int end = size - 1;
    vector<int> ans(2);
    while (start < end)
    {
        if (array[start] + array[end] == aim)
        {
            ans[0] = array[start];
            ans[1] = array[end];
            return ans;
        }

        else if (array[start] + array[end] > aim)
            end--;
        else if (array[start] + array[end] < aim)
            start++;
    }

    ans[0] = -1;
    ans[1] = -1;
    return ans;
}

int main()
{

    int arr[] = {2, 7, 11, 15, 27};

    int size = sizeof(arr) / sizeof(arr[0]);

    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }

    cout << endl;
    int target;
    cout << "\nEnter your target : ";
    cin >> target;

    vector<int> answer(2);
    answer = twoSum(arr, target, size);

    cout << answer[0] << " + " << answer[1] << " = " << target << endl;

    cout << endl;
    return 0;
}