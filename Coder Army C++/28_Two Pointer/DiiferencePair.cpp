/*  ----------------------- हरे कृष्ण  -----------------------
Programmer = Sudhanshu Barnwal
Topic = Two Pointer
Purpose = Difference Pair by Two Pointer Approach
Date = 23/12/2023   */

#include <bits/stdc++.h>
using namespace std;

vector<int> differencePair(vector<int> &array, int size, int aim)
{
    sort(array.begin(), array.end());

    vector<int> ans(2);

    int start = 0;
    int end = 1;
    while (end < size)
    {
        if (array[end] - array[start] == aim)
        {
            ans[0] = array[end];
            ans[1] = array[start];
            return ans;
        }
        else if (array[end] - array[start] < aim)
            end++;
        else if (array[end] - array[start] > aim)
            start++;
    }

    ans[0] = -1;
    ans[1] = -1;
    return ans;
}

int main()
{

    vector<int> arr{5, 10, 3, 2, 50, 80};

    int size = arr.size();
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }

    cout << endl;
    int target;
    cout << "\nEnter your goal : ";
    cin >> target;

    vector<int> answer(2);

    answer = differencePair(arr, size, target);

    cout << answer[0] << " - " << answer[1] << " = " << target << endl;

    cout << endl;
    return 0;
}