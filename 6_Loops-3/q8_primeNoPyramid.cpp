/* Programmer = Sudhanshu Barnwal
Purpose = Prime number Pyramid continuously
Date = 17/01/2023   */

#include <bits/stdc++.h>
using namespace std;

int main()
{

    int row;
    cout << "\n Enter no. of Rows :- ";
    cin >> row;

    cout << endl;
    int j = 1;
    for (int i = 1; i <= row; i++)
    {
        for (int j = 1; j <= row - i; j++)
        {
            cout << " "
                 << " ";
        }
        int counting = 0;
        j += 1;
        for (; j > 1; j++)
        {
            int twofact = 2;
            for (int k = 1; k <= j; k++)
            {
                if (j % k == 0)
                {
                    twofact--;
                }
            }
            if (twofact == 0)
            {
                counting++;
                cout << j << " ";
            }
            if (counting == i)
            {
                break;
            }
        }
        cout << endl;
    }

    cout << endl;
    return 0;
}