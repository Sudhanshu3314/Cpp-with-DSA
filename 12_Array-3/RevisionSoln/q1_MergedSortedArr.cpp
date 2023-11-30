/* Programmer = Sudhanshu Barnwal
Topic =
Purpose =
Date = /08/2023   */

#include <bits/stdc++.h>
using namespace std;

void mergedSortedArray(vector<int> &vec1, vector<int> &vec2, int &size1, int &size2)
{
    int indexOfArr1 = 0; // for traversing the array 1
    int indexOfArr2 = 0; // for traversing the array 2
    int indexOfResArr = 0; // for traversing the resultant array which is merger and also sorted

    vector<int> resArr(size1+size2);

    while (indexOfArr1 < size1 && indexOfArr2 < size2) // Here , comparing values of array 1 and array 2 for inserting the values of array 1 and array 2 in resultant array
    {
        if (vec1[indexOfArr1] < vec2[indexOfArr2])
        {
            resArr[indexOfResArr++] = vec1[indexOfArr1++];
        }
        else
        {
            resArr[indexOfResArr++] = vec2[indexOfArr2++];
        }
    }

    while (indexOfArr1 < size1) // While array 2 gets exhausted so array 1 elements are remaining to insert in resultant array. So there is no need to compare the remaining values bcoz it is sorted increasingly by default
    {
        resArr[indexOfResArr++] = vec1[indexOfArr1++];
    }
    while (indexOfArr2 < size2) // While array 1 gets exhausted so array 2 elements are remaining to insert in resultant array. So, there is no need to compare the remaining values bcoz it is sorted increasingly by default
    {
        resArr[indexOfResArr++] = vec2[indexOfArr2++];
    }
    for (int ele : resArr )
    {
        cout << ele << " ";
    }
    
}

int main()
{

    vector<int> arr1{2, 3, 4, 5, 7};
    vector<int> arr2{0, 1, 10, 11};
    int m = arr1.size();
    int n = arr2.size();

    mergedSortedArray(arr1, arr2, m, n);

    cout << endl;
    return 0;
}