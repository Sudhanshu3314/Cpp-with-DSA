/*  ----------------------- हरे कृष्ण  ----------------------- 
Programmer = Sudhanshu Barnwal 
Topic = 2D Array 
Purpose = Spiral Matrix
Date = 14/06/2025 */

#include<bits/stdc++.h>
using namespace std;

int main(){

    cout << endl ;

    vector<vector<int>> matrix{{1, 2, 3, 4, 5}, {6, 7, 8, 9, 10}, {11, 12, 13, 14, 15}, {16, 17, 18, 19, 20}, {21, 22, 23, 24, 25}};

    int row = matrix.size(), col = matrix[0].size();

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
            cout << matrix[i][j] << "\t";
        cout << endl;        
    }
    

                    // left = 0 
    // top = 0          // 00 01 02 03 04 
                        // 10 11 12 13 14
                        // 20 21 22 23 24
                        // 30 31 32 33 34
                        // 40 41 42 43 44
                 // bottom = row-1    right = col-1

    cout << endl;

    // Dry run this example then you will definitely get to know why this conditions are written in while loop and why it is playing mandatory role
    // 2 3 4 5 6 7 
    // top = 0 , bottom = row -1 , left = 0 , right = col - 1

    int top = 0 , left = 0;
    int bottom = row - 1, right = col - 1;

    while (left <= right && top <= bottom)
    {
        for( int i = left ; i <= right ; i++ ){
            cout << matrix[top][i] << " ";
        }
        top++;
        for( int i = top ; i <= bottom ; i++ ){
            cout << matrix[i][right] << " ";
        }
        right--;
        if( top <= bottom ){
            for( int i = right ; i >= left ; i-- ){
                cout << matrix[bottom][i] << " ";
            }
            bottom--;
        }
        if( left <= right ){
            for( int i = bottom ; i >= top ; i-- ){
                cout << matrix[i][left] << " ";
            }
            left++;
        }
    }
    


    cout << endl ;
    return 0;
}