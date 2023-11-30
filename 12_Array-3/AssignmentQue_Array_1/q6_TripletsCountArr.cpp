/* Programmer = Sudhanshu Barnwal
Topic = Assignment Question
Purpose = Given a vector array nums, print the count of triplets
[num[i] , num[j] , num[k]] such that i != j , i != k , and j != k .
 num[i] + num[j] + num[k] == x , where x is an integer by the user

Input : [-1, 0, 1, 2, -1, -4]   x = 0
Output : 2
Explaination : The two triplets are : 1, 0 , -1 and 2,-1,-1

Input : [1 ,2 ,5 ]    x = 5
Output : 0

Date = 24/07/2023   */

#include <bits/stdc++.h>
using namespace std;

int tripletCount(vector<int> &vec, int userValue)
{
    int countTriplet = 0;
    int left_ptr;
    int right_ptr;

    for (int i = 0; i < vec.size(); i++)
    {
        left_ptr = i + 1;         // index For getting one value at a time for calculation
        right_ptr = left_ptr + 1; // index for traversing the loop for third value satisfaction

        while (left_ptr < vec.size() || right_ptr < vec.size())
        {
            if ((vec[left_ptr] + vec[right_ptr] + vec[i]) == userValue && vec[right_ptr] != vec[left_ptr] && vec[right_ptr] != vec[i] && vec[left_ptr] != vec[i])
            {
                cout << vec[i] << " + " << vec[left_ptr] << " + " << vec[right_ptr] << " = " << userValue << endl;
                countTriplet++;
                right_ptr++;
            }
            else if (right_ptr < vec.size())
            {
                right_ptr++;
            }
            if (right_ptr == vec.size() && left_ptr < vec.size())
            {
                left_ptr = left_ptr + 1;
                if (left_ptr == vec.size() - 1)
                {
                    goto outsideWhileLoop;
                }
                right_ptr = left_ptr + 1;
            }
        }
    outsideWhileLoop:
        cout << "";
    }

    return countTriplet;
}

int main()
{

    // x =2
    vector<int> vec{-1, 0, 1, 2, -1, -4};

    int x;
    cout << "\nEnter value of x : ";
    cin >> x;

    cout << endl;

    cout << "\nThe total no. of Triplets are " << tripletCount(vec, x) << endl;

    cout << endl;
    return 0;
}