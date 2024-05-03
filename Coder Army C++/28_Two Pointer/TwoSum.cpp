/*  ----------------------- हरे कृष्ण  -----------------------
Programmer = Sudhanshu Barnwal
Topic = Two Pointer
Purpose = Two Sum By Binary Search Approach
Date = 23/12/2023   */

#include <bits/stdc++.h>
using namespace std;

vector<int> twoSum(int array[], int size, int aim)
{
    vector<int> ans(2);
    for (int i = 0; i < size - 1; i++)
    {
        int findVal = aim - array[i];
        int start = i + 1;
        int end = size - 1;

        while (start <= end)
        {
            int mid = start + (end - start) / 2;
            if (array[mid] == findVal)
            {
                ans[0] = array[i];
                ans[1] = findVal;
                return ans;
            }
            else if (array[mid] < findVal)
            {
                start = mid + 1;
            }
            else if (array[mid] > findVal)
            {
                end = mid - 1;
            }
        }
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
    cout << "\nEnter your goal : ";
    cin >> target;

    vector<int> answer(2);
    answer = twoSum(arr, size, target);

    cout << answer[0] << " + " << answer[1] << " = " << target << endl;

    cout << endl;
    return 0;
}