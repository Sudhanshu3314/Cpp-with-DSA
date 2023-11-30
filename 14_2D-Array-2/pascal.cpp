#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> pascalTriangle(int row)
{
    vector<vector<int>> pascal(row);

    for (int i = 0; i < row; i++)
    {
        pascal[i].resize(i + 1); // For storing the values and if resize is not done then we can't store any value bcoz i initialize with zero ( 0 )
        for (int j = 0; j <= i; j++)
        {
            if (j == 0 || i == j)
            {
                pascal[i][j] = 1;
            }
            else
            {
                pascal[i][j] = pascal[i - 1][j] + pascal[i - 1][j - 1];
            }
        }
    }
    return pascal;
}

int main()
{

    int row;
    cout << "\nEnter no of Rows for Pascal's Triangle : ";
    cin >> row;

    vector<vector<int>> pascalTriDraw;
    pascalTriDraw = pascalTriangle(row);

    for (int i = 0; i < pascalTriDraw.size(); i++)
    {
        for (int j = 0; j < pascalTriDraw[i].size(); j++)
        {
            cout << pascalTriDraw[i][j] << "\t";
        }
        cout << endl;
    }

    cout << endl;
    return 0;
}