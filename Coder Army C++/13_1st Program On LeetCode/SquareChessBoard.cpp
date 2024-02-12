/*  ----------------------- Hare Krishn  -----------------------
Programmer = Sudhanshu Barnwal
Topic = GFG Problem 
https://www.geeksforgeeks.org/problems/squares-in-nn-chessboard1801/1?page=1&difficulty%5B%5D=-1&category%5B%5D=Numbers&sortBy=submissions
Purpose = Square ChessBoard N*N
Date = 12/02/2024   */

#include <bits/stdc++.h>
using namespace std;

int squareChessBoard(int n)
{
    if (n == 1)
        return 1;
    return n * n + squareChessBoard(n - 1);
}

int main()
{

    cout << endl;

    int numOfSquare;
    cout << "Enter no of Square : ";
    cin >> numOfSquare;

    cout << "Total No Of Squares in " << numOfSquare << " X " << numOfSquare << 
     " is " << squareChessBoard(numOfSquare);

    cout << endl;
    return 0;
}