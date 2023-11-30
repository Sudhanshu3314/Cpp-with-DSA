/* Programmer = Sudhanshu Barnwal 
Purpose = Loop In Vector
Date = 08/01/2023   */

#include<bits/stdc++.h>
using namespace std;

int main(){

    vector<int> v;

    for (int i = 0; i < 5; i++)
    {
        int element ;
        cout << " \n Enter the " << i + 1 << " index value :- " ;
        cin >> element ;
        v.push_back(element);
    }

    cout << endl ;
    // for loop
    cout << "----> By For Loop i.e. ";
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " " ;
    }
    cout << endl ;
    
    v.insert( v.begin() + 2 , 6 ); //  add element 6 at index 2 
    // for each loop
    cout << "----> By For each Loop i.e. ";
    for( int ele : v ){
        cout << ele << " " ;
    }
    cout << endl ;

    v.erase( v.end() - 2); // clear the element from second last index of vector
    
    int idx = 0 ;
    // Using while loop
    cout << "----> By while Loop i.e. ";
    while ( idx < v.size() )
    {
        cout << v[idx++] << " ";
    }
    cout << endl;
    
    return 0;
}