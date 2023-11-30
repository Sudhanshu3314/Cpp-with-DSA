/* Programmer = Sudhanshu Barnwal
Topic = Assignment Question
Purpose = Given a vector array nums, print the count of triplets
[num[i] , num[j] , num[k]] such that i != j , i != k , and j != k .
 num[i] + num[j] + num[k] == x , where x is an integer by the user

Input : [-4, -1 , -1, 0, 1, 2]   x = 0
Output : 2
Explaination : The two triplets are : 1, 0 , -1 and 2,-1,-1

Input : [1 ,2 ,5 ]    x = 5
Output : 0

Date = 24/07/2023   */

#include <bits/stdc++.h>
using namespace std;

int tripletSumIncrease(vector<int> &vec, int &userValue)
{
    int countTriplet = 0;
    int left_ptr = 0 ;
    int right_ptr = vec.size()-1;
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

    // x = 2
    vector<int> vec{-6, -5, -4, -3, -2 - 1, 0, 1, 2, 3, 4, 5, 6};

    int x;
    cout << "\nEnter value of x : ";
    cin >> x;

    cout << "\nThe total no. of Triplets are " << tripletSumIncrease(vec, x) << endl;

    cout << endl;
    return 0;
}