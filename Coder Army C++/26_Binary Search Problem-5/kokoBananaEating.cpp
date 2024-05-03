/*  ----------------------- हरे कृष्ण  -----------------------
Programmer = Sudhanshu Barnwal
Topic = Binary Search Problem
Purpose = Koko Eating Banana
Date = 16/12/2023   */

#include <bits/stdc++.h>
using namespace std;

int maximumBananaEating(vector<int> &piles, int size, int hours)
{

    int ans ;
    int start = INT_MAX;
    int end = INT_MIN;
    for (int i = 0; i < size; i++)
    {
        start = min( start , piles[i] );
        end = max( end , piles[i] );
    }

    while ( start <= end )
    {
        int mid = start + ( end - start )/ 2 ;
        int totalHours = 0 ;
        for (int i = 0; i < size; i++)
        {
            totalHours += (piles[i]/mid);
            if( piles[i] % mid ){
                totalHours++;
            }
        }
        if( totalHours <= hours) {
            ans = mid; 
            end = mid -1 ;
        }
        else{
            start = mid + 1;
        }
    }
    
    return ans;
}

int main()
{

    vector<int> piles{3, 6, 11, 7};
    int size = piles.size();

    cout << "\n Piles of Banana's are { ";
    for (int i = 0; i < size; i++)
    {
        if (i != size - 1)
            cout << piles[i] << " , ";
        else if (i == size - 1)
            cout << piles[i] << " } " << endl;
    }

    cout << endl;

    int hours;
    cout << "\nEnter no. of hours : ";
    cin >> hours;

    cout << endl;
    cout << "If koko eating bananas in " << maximumBananaEating(piles, size, hours) << " bananas/ hour then only he can eat all his bananas which is stored in Piles " << endl;

    cout << endl;
    return 0;
}