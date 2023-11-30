/* Programmer = Sudhanshu Barnwal
Topic = Two Pointer
Purpose = Given an integer array 'a' sorted in non-decreasing order, return an array of the squares of each number sorted in non-decreasing order
Date = 22/07/2023   */

#include <bits/stdc++.h>
using namespace std;

// size = 5
// value = -6 -3 2 5 7
// left_ptr = 3 ;
// right_ptr = 2 ;
// ans[] = 49 36 25 9 4
// ReverseAns = 4 9 25 36 49

void sortSquareNumber(vector<int> &vect)
{
    int left_ptr = 0;
    int right_ptr = vect.size() - 1;

    vector<int> ans;

    while (left_ptr <= right_ptr)
    {
        if ((abs(vect[left_ptr])) < (abs(vect[right_ptr])))
        {
            ans.push_back(vect[right_ptr] * vect[right_ptr]);
            right_ptr--;
        }
        else
        {
            ans.push_back(vect[left_ptr] * vect[left_ptr]);
            left_ptr++;
        }
    }

    reverse(ans.begin(), ans.end());
    for (int i = 0; i < vect.size(); i++)
    {
        cout << ans[i] << " ";
    }
}

int main()
{

    int size;
    cout << "\nEnter that how many value do you want to type : ";
    cin >> size;

    vector<int> vec;

    for (int i = 0; i < size; i++)
    {
        int element;
        cout << "\nEnter the value of " << i << " index : ";
        cin >> element;
        vec.push_back(element);
    }

    sortSquareNumber(vec);

    cout << endl;
    return 0;
}