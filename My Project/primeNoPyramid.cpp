/* Programmer = Sudhanshu Barnwal
Topic =
Purpose =
Date = /01/2023   */

#include <bits/stdc++.h>
using namespace std;

int main()
{

    int num;
    cout << "\n Enter no of row :- ";
    cin >> num;

    cout << endl;
    int k = 1 ;
    for (int i = 1; i <= num; i++)
    {
        for (int j = 1; j <= num - i; j++)
        {
            cout << " " << " ";
        }
        int counting = 0;
        for ( k += 1; k > 0; k++)
        {
            int twofact = 2;
            for (int j = 1; j <= k; j++)
            {
                if (k % j == 0)
                {
                    twofact--;
                }
            }
            if (twofact == 0)
            {
                cout << k << " ";
                counting++;
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