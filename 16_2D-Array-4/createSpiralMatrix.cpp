/* Programmer = Sudhanshu Barnwal
Purpose = Print Spiral Matrix

Topic : Given a positive integer n , generate a n X n matrix filled with elements form 1 to n in spiral order 

if input row = 4 
then the matrix will be print like this:

       1       2       3       4
       12      13      14      5
       11      16      15      6
       10      9       8       7


Date = 04/08/2023   */

#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> printSpiralMatrix(int &numOfRow)
{

    vector<vector<int>> spiraledMatrix(numOfRow, vector<int>(numOfRow));

    int left = 0;
    int right = numOfRow - 1;
    int top = 0;
    int bottom = numOfRow - 1;

    int direction = 0;
    int value = 0;

    while ((left <= right) && (top <= bottom))
    {
        if (direction == 0)
        {
            // left --> right
            for (int col = left; col <= right; col++)
            {
                spiraledMatrix[top][col] = ++value; // here, row value is constant i.e. top
            }
            top++;
        }
        else if (direction == 1)
        {
            // top --> bottom
            for (int row = top; row <= bottom; row++)
            {
                spiraledMatrix[row][right] = ++value; // here, column value is constant i.e. right
            }
            right--;
        }
        else if (direction == 2)
        {
            // right --> left
            for (int col = right; col >= left; col--)
            {
                spiraledMatrix[bottom][col] = ++value; // here, row constant value i.e. bottom
            }
            bottom--;
        }
        else if (direction == 3)
        {
            // bottom --> top
            for (int row = bottom; row >= top; row--)
            {
                spiraledMatrix[row][left] = ++value; // here, column constant value i.e. left
            }
            left++;
        }

        direction = (direction + 1) % 4;
    }

    return spiraledMatrix;
}

int main()
{

    int row;
    cout << "\nEnter no of row : ";
    cin >> row;

    int value = 0;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < row; j++)
        {
            cout << ++value << "\t";
        }
        cout << endl;
    }

    vector<vector<int>> createSpiralMatrix(row, vector<int>(row));

    createSpiralMatrix = printSpiralMatrix(row);

    cout << endl;

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < row; j++)
        {
            cout << createSpiralMatrix[i][j] << "\t";
        }
        cout << endl;
    }

    cout << endl;
    return 0;
}