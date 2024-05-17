/*  ----------------------- हरे कृष्ण  ----------------------- 
Programmer = Sudhanshu Barnwal 
Topic = Suffix Sum 
Purpose = Suffix Sum 
Date = 15/05/2024   */

#include<bits/stdc++.h>
using namespace std;

int main(){

    cout << endl ;
    vector<int> vec{6,4,5,-3,2,8};
    int n = vec.size();

    cout << " Suffix Sum : " << endl ;
    cout << "{ ";
    for (int i = 0; i < n; i++)
    {
        if (i != n - 1)
            cout << vec[i] << ", ";
        else
            cout << vec[i] << " } ";
    }
    cout << endl;

    for (int i = n-2 ; i >= 0 ; i-- )
    {
        vec[i] = vec[i+1] + vec[i];
    }

    cout << "{ ";
    for (int i = 0; i < n; i++)
    {
        if (i != n - 1)
            cout << vec[i] << ", ";
        else
            cout << vec[i] << " } ";
    }
    
    cout << endl ;
    return 0;
}