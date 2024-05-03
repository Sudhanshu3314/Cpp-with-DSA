/*  ----------------------- हरे कृष्ण  -----------------------
Programmer = Sudhanshu Barnwal
Topic = Two Pointer
Purpose = Two Product By Two Pointer Approach
Date = 23/12/2023   */

#include <bits/stdc++.h>
using namespace std;

vector<int> twoProduct(int array[], int size, int aim)
{
    vector<int> ans(2);

    int start = 0;
    int end = size - 1;
    while (start < end)
    {
        if (array[start] * array[end] == aim)
        {
            ans[0] = array[start];
            ans[1] = array[end];
            return ans;
        }
        else if (array[start] * array[end] < aim)
        {
            start++;
        }
        else if (array[start] * array[end] > aim)
        {
            end--;
        }
    }

    ans[0] = -1;
    ans[1] = -1;
    return ans;
}

int main()
{

    int arr[] = {3, 7, 8, 11, 25};
    int size = sizeof(arr) / sizeof(arr[0]);

    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }

    cout << endl;
    int target;
    cout << "\nEnter your goal : ";
    cin >> target;

    vector<int> answer(2);
    answer = twoProduct(arr, size, target);

    cout << answer[0] << " x " << answer[1] << " = " << target << endl;

    cout << endl;
    return 0;
}