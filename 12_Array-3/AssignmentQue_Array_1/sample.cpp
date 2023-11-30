/* Programmer = Sudhanshu Barnwal
Topic =
Purpose =  Given a vector array nums, print the count of triplets [nums[i],
nums[j], nums[k]] such that i != j, i != k, and j != k, and nums[i] + nums[j] +
nums[k] == x. Where k is an integer given by the user. Note: The solution set
must not contain duplicate triplets and should not have 3 loops.

Input: [-6 ,-5 , -4 , -3 , 0 , 1 , 2 , 4 , 6 ]       x = 0
Output: 2
Explanation: The two triplets are: -1,0,1 and 1,2,-1

Input: [1,2,3]       x = 5
Output: 0
Date = /03/2023   */

#include <bits/stdc++.h>
using namespace std;

int tripletSumIncrease(vector<int> &vec, int &userValue)
{
    int countTriplet = 0;

    int left_ptr = 0;
    int right_ptr = vec.size() - 1;
    for (int i = 0; i < vec.size(); i++)
    {
        left_ptr = i + 1;
        right_ptr = vec.size() - 1;
        while (left_ptr <= right_ptr)
        {
            if ((vec[left_ptr] + vec[right_ptr]) < (userValue - (vec[i])))
            {
                left_ptr++;
            }
            else if ((vec[left_ptr] + vec[right_ptr]) > (userValue - (vec[i])))
            {
                right_ptr--;
            }
            else if ((vec[left_ptr] + vec[right_ptr]) == (userValue - (vec[i])))
            {
                cout << ++countTriplet << ") " << vec[i] << " + " << vec[left_ptr++] << " + " << vec[right_ptr--] << " = " << userValue << endl;
            }
        }
    }

    return countTriplet;
}

int main()
{

    vector<int> vec{-6, -5, -4, -3, -2, -1, 0, 1, 2, 3, 4, 5, 6};

    int x;
    cout << "\nEnter the value of x : ";
    cin >> x;

    cout << tripletSumIncrease(vec, x) << endl;
    cout << endl;
    return 0;
}