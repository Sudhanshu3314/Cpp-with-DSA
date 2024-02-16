/*  ----------------------- Hare Krishn  -----------------------
Programmer = Sudhanshu Barnwal
Topic = Questions
https://www.interviewbit.com/problems/total-moves-for-bishop/
Purpose = Bishop Moves
Date = 14/02/2024   */

#include <bits/stdc++.h>
using namespace std;

int main()
{

    cout << endl;

    int A, B;
    cout << "Enter no of X-cordinate : ";
    cin >> A;
    cout << "Enter no of Y-cordinate : ";
    cin >> B;

    int count = 0;
    count += min(8 - A, 8 - B);
    count += min(A - 1, B - 1);
    count += min(8 - A, B - 1);
    count += min(A - 1, 8 - B);

    cout << count << endl;

    cout << endl;
    return 0;
}