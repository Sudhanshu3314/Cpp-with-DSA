/* Programmer = Sudhanshu Barnwal
Topic = 2D-Vector
Purpose = Rotate the array in 90 degree clockwise
Date = 30/07/2023   */

#include <bits/stdc++.h>
using namespace std;

void rotateTheArray(vector<vector<int>> &v)
{

    for (int i = 0; i < v.size(); i++)
    {
        for (int j = 0; j < i; j++)
        {
            swap(v[i][j], v[j][i]);
        }
    }

    for (int i = 0; i < v.size(); i++)
    {
        reverse(v[i].begin(), v[i].end());
    }
}

int main()
{

    int size;
    cout << "\nEnter the Row and Column of matrix once : ";
    cin >> size;

    // Declaring a Matrix with size (size*size)
    vector<vector<int>> vec(size, vector<int>(size));

    for (int i = 0; i < size; i++)
    {
        cout << "\n --------- Enter Value of " << i << " Row : -------- " << endl;
        for (int j = 0; j < size; j++)
        {
            cout << "\nEnter the value of " << i << j << " index : ";
            cin >> vec[i][j];
        }
    }

    cout << "\n Given array is : \n"
         << endl;

    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            cout << vec[i][j] << " ";
        }
        cout << endl;
    }

    rotateTheArray(vec);

    cout << "\n ---------> Rotating the array 90 degree clockwise : \n"
         << endl;

    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            cout << vec[i][j] << " ";
        }
        cout << endl;
    }

    cout << endl;
    return 0;
}