/* Programmer = Sudhanshu Barnwal
Topic = Two Pointer
Purpose = Given a array an integer 'a' move all the even integers at the beginning of the array followed by all the odd integers.The relative order of odd or even integers does not matter.Return any array that satifies the condition
Date = 22/07/2023   */

#include <bits/stdc++.h>
using namespace std;

void sortOddEvenInteger(vector<int> &vec)
{
    int left_ptr = 0;
    int right_ptr = vec.size() - 1;
    while (left_ptr < right_ptr)
    {
        if (vec[left_ptr] % 2 != 0 && vec[right_ptr] % 2 == 0)
        {
            int temp = vec[left_ptr];
            vec[left_ptr++] = vec[right_ptr];
            vec[right_ptr--] = temp;
        }
        if (vec[left_ptr] % 2 == 0)
        {
            left_ptr++;
        }
        if (vec[right_ptr] % 2 != 0)
        {
            right_ptr--;
        }
    }
}

int main()
{

    int size;
    cout << "\nEnter that how many values do you want to type : ";
    cin >> size;

    vector<int> vec;

    for (int i = 0; i < size; i++)
    {
        int element;
        cout << "\nEnter the value of " << i << " index : ";
        cin >> element;
        vec.push_back(element);
    }

    sortOddEvenInteger(vec);

    for (int ele : vec)
    {
        cout << ele << " ";
    }

    cout << endl;
    return 0;
}