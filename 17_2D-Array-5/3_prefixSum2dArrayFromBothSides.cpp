/* Programmer = Sudhanshu Barnwal
Topic =
Purpose =
Date = /08/2023   */

#include <bits/stdc++.h>
using namespace std;

void printMatrix(vector<vector<int>> &matrix)
{
    int value = 0;
    for (int i = 0; i < matrix.size(); i++)
    {
        for (int j = 0; j < matrix[i].size(); j++)
        {
            matrix[i][j] = ++value;
            cout << matrix[i][j] << "\t";
        }
        cout << endl;
    }
}

void prefixSumArrRowWise(vector<vector<int>> &matrix)
{
    for (int i = 0; i < matrix.size(); i++)
    {
        for (int j = 1; j < matrix[i].size(); j++)
        {
            matrix[i][j] += matrix[i][j - 1]; // matrix[i][j] +  matrix[i][j] + matrix[i][j - 1]
            if (j - 1 == 0)
            {
                cout << matrix[i][j - 1] << "\t";
            }
            cout << matrix[i][j] << "\t";
        }
        cout << endl;
    }
}

void prefixSumArrColumnWise(vector<vector<int>> &matrix)
{
    for (int i = 1; i < matrix.size(); i++)
    {
        for (int j = 0; j < matrix[i].size(); j++)
        {
            matrix[i][j] += matrix[i - 1][j];
        }
    }

    for (int i = 0; i < matrix.size(); i++)
    {
        for (int j = 0; j < matrix[i].size(); j++)
        {
            cout << matrix[i][j] << "\t";
        }
        cout << endl;
    }
}

int sumOfRectangle(int &x1, int &y1, int &x2, int &y2, vector<vector<int>> &matrix)
{
    int sum = 0;
    int leftSum = 0, topSum = 0, topLeftSum = 0;
    if (x1 != 0)
    {
        topSum = matrix[x1 - 1][y2];
    }
    if (y1 != 0)
    {
        leftSum = matrix[x2][y1 - 1];
    }
    if (y1 != 0 && x1 != 0)
    {
        topLeftSum = matrix[x1 - 1][y1 - 1];
    }

    sum += matrix[x2][y2] - topSum - leftSum + topLeftSum;
    return sum;
}

int main()
{

    int row, col;
    cout << "\nEnter no of row : ";
    cin >> row;
    cout << "\nEnter no of Column : ";
    cin >> col;

    vector<vector<int>> array(row, vector<int>(col));

    cout << endl;
    cout << "\nMatrix is : " << endl;
    printMatrix(array);

    cout << endl;
    cout << "\nNow, Matrix Looking like this by doing Prefix Sum from Row wise : " << endl;
    prefixSumArrRowWise(array);

    cout << endl;

    cout << "\nNow, Matrix Looking like this by doing Prefix Sum from Column wise : " << endl;
    prefixSumArrColumnWise(array);

    cout << endl;

    int queries;
    cout << "\nEnter that how many number of queries do you want to give : ";
    cin >> queries;

    while (queries--)
    {
        int l1, r1, l2, r2;
        cout << "\nEnter the value of l1 : ";
        cin >> l1;
        cout << "\nEnter the value of r1 : ";
        cin >> r1;
        cout << "\nEnter the value of l2 : ";
        cin >> l2;
        cout << "\nEnter the value of r2 : ";
        cin >> r2;

        int result = sumOfRectangle(l1, r1, l2, r2, array);

        cout << "\n ------------> Sum : " << result << endl;
    }

    cout << endl;
    return 0;
}