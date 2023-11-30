/* Programmer = Sudhanshu Barnwal 
Purpose = Vector concept
Date = 08/01/2023   */

#include<bits/stdc++.h>
using namespace std;

int main(){

    vector<int> v;

    cout << endl ;
    cout << "Size of vector is " << v.size() << endl ;
    cout << "Capacity of vector is " << v.capacity() << endl ;
    
    cout << endl ;
    v.push_back(1) ;
    cout << "Size of vector is " << v.size() << endl ;
    cout << "Capacity of vector is " << v.capacity() << endl ;

    cout << endl ;
    v.push_back(2) ;
    cout << "Size of vector is " << v.size() << endl ;
    cout << "Capacity of vector is " << v.capacity() << endl ;

    cout << endl ;
    v.push_back(3) ;
    cout << "Size of vector is " << v.size() << endl ;
    cout << "Capacity of vector is " << v.capacity() << endl ;

    cout << endl ;
    v.resize(5) ;
    cout << "Size of vector is " << v.size() << endl ;
    cout << "Capacity of vector is " << v.capacity() << endl ;

    cout << endl ;
    v.resize(7) ;
    cout << "Size of vector is " << v.size() << endl ;
    cout << "Capacity of vector is " << v.capacity() << endl ;

    cout << endl ;
    v.resize(12) ;
    cout << "Size of vector is " << v.size() << endl ;
    cout << "Capacity of vector is " << v.capacity() << endl ;

    cout << endl ;
    v.resize(16) ;
    cout << "Size of vector is " << v.size() << endl ;
    cout << "Capacity of vector is " << v.capacity() << endl ;

    cout << endl ;
    v.resize(25) ;
    cout << "Size of vector is " << v.size() << endl ;
    cout << "Capacity of vector is " << v.capacity() << endl ;

    cout << endl ;
    v.resize(33) ;
    cout << "Size of vector is " << v.size() << endl ;
    cout << "Capacity of vector is " << v.capacity() << endl ;

    for (int i = 1; i <= 2; i++)
    {
        v.pop_back(); // deleting the last two size of vector
    }
    
    cout << endl ;
    cout << "Size of vector is " << v.size() << endl ;
    cout << "Capacity of vector is " << v.capacity() << endl ;

    v.clear() ; // Deleting the vector completely
    cout << endl ;
    cout << "Size of vector is " << v.size() << endl ;
    cout << "Capacity of vector is " << v.capacity() << endl ;

    return 0;
}