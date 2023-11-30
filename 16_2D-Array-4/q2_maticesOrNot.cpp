/* Programmer = Sudhanshu Barnwal
Topic =
Purpose =
Date = /08/2023   */

#include <bits/stdc++.h>
using namespace std;

bool checkMatrix(vector<vector<int>> &v)
{
    int count = 0;
    for (int i = 0; i < v.size(); i++)
    {
        for (int j = 0; j < v[i].size(); j++)
        {
            if (i == j && v[i][j] == 0)
            {
                count++;
            }
        }
        if (count == v.size())
        {
            return false;
        }
    }
    return true;
}

int main()
{

    int rowCol;
    cout << "\nEnter no. of Row and Column Once : ";
    cin >> rowCol;

    vector<vector<int>> vec(rowCol, vector<int>(rowCol));

    for (int i = 0; i < rowCol; i++)
    {
        cout << "\n -------------- Enter the value of " << i + 1 << " row : ---------- " << endl;
        for (int j = 0; j < rowCol; j++)
        {
            cout << "\nEnter the value of " << i << j << " index : ";
            cin >> vec[i][j];
        }
    }

    cout << "\n -------------------- Matrix : ------------------------ " << endl;
    for (int i = 0; i < rowCol; i++)
    {
        for (int j = 0; j < rowCol; j++)
        {
            cout << vec[i][j] << "\t";
        }
        cout << endl;
    }

    if ( checkMatrix(vec) )
    {
        cout << "\n Your given matrix is Perfect Matrix. " << endl;
    }
    else{
        cout<<"\nYour given matrix is NOT Perfect Matrix."<<endl;
    }
    
    cout << endl;
    return 0;
}